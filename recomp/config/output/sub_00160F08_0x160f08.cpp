#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00160F08
// Address: 0x160f08 - 0x1614e8
void sub_00160F08_0x160f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x160f08u;

    // 0x160f08: 0x27bdfff0
    ctx->pc = 0x160f08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x160f0c: 0xffb00000
    ctx->pc = 0x160f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x160f10: 0x24100001
    ctx->pc = 0x160f10u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160f14: 0x10800006
    ctx->pc = 0x160F14u;
    {
        const bool branch_taken_0x160f14 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x160F18u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x160f14) {
            ctx->pc = 0x160F30u;
            goto label_160f30;
        }
    }
    ctx->pc = 0x160F1Cu;
    // 0x160f1c: 0x10900009
    ctx->pc = 0x160F1Cu;
    {
        const bool branch_taken_0x160f1c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 16));
        ctx->pc = 0x160F20u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x160f1c) {
            ctx->pc = 0x160F44u;
            goto label_160f44;
        }
    }
    ctx->pc = 0x160F24u;
    // 0x160f24: 0x10000004
    ctx->pc = 0x160F24u;
    {
        const bool branch_taken_0x160f24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160F28u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x160f24) {
            ctx->pc = 0x160F38u;
            goto label_160f38;
        }
    }
    ctx->pc = 0x160F2Cu;
    // 0x160f2c: 0x0
    ctx->pc = 0x160f2cu;
    // NOP
label_160f30:
    // 0x160f30: 0x10000003
    ctx->pc = 0x160F30u;
    {
        const bool branch_taken_0x160f30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160F34u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x160f30) {
            ctx->pc = 0x160F40u;
            goto label_160f40;
        }
    }
    ctx->pc = 0x160F38u;
label_160f38:
    // 0x160f38: 0xc058dd4
    ctx->pc = 0x160F38u;
    SET_GPR_U32(ctx, 31, 0x160F40u);
    ctx->pc = 0x160F3Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965536));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160F40u; }
    }
    if (ctx->pc != 0x160F40u) { return; }
    ctx->pc = 0x160F40u;
label_160f40:
    // 0x160f40: 0x200102d
    ctx->pc = 0x160f40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160f44:
    // 0x160f44: 0xdfb00000
    ctx->pc = 0x160f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160f48: 0xdfbf0008
    ctx->pc = 0x160f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160f4c: 0x3e00008
    ctx->pc = 0x160F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160F50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160F30u: goto label_160f30;
            case 0x160F38u: goto label_160f38;
            case 0x160F40u: goto label_160f40;
            case 0x160F44u: goto label_160f44;
            case 0x160FD0u: goto label_160fd0;
            case 0x160FE8u: goto label_160fe8;
            case 0x161018u: goto label_161018;
            case 0x161078u: goto label_161078;
            case 0x161090u: goto label_161090;
            case 0x1610C0u: goto label_1610c0;
            case 0x161128u: goto label_161128;
            case 0x161148u: goto label_161148;
            case 0x16117Cu: goto label_16117c;
            case 0x1611E0u: goto label_1611e0;
            case 0x1611F8u: goto label_1611f8;
            case 0x161228u: goto label_161228;
            case 0x161288u: goto label_161288;
            case 0x1612A0u: goto label_1612a0;
            case 0x1612D0u: goto label_1612d0;
            case 0x161330u: goto label_161330;
            case 0x161348u: goto label_161348;
            case 0x161378u: goto label_161378;
            case 0x1613D8u: goto label_1613d8;
            case 0x1613F0u: goto label_1613f0;
            case 0x161420u: goto label_161420;
            case 0x161478u: goto label_161478;
            case 0x1614A8u: goto label_1614a8;
            case 0x1614D0u: goto label_1614d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x160F54u;
    // 0x160f54: 0x0
    ctx->pc = 0x160f54u;
    // NOP
    // 0x160f58: 0x27bdfff0
    ctx->pc = 0x160f58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x160f5c: 0xffbf0000
    ctx->pc = 0x160f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160f60: 0x8c8400a8
    ctx->pc = 0x160f60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x160f64: 0xdfbf0000
    ctx->pc = 0x160f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160f68: 0x805f4a2
    ctx->pc = 0x160F68u;
    ctx->pc = 0x160F6Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D288u;
    entry_17d288_0x17d2d8(rdram, ctx, runtime); return;
    ctx->pc = 0x160F70u;
    // 0x160f70: 0x27bdfff0
    ctx->pc = 0x160f70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x160f74: 0xffbf0000
    ctx->pc = 0x160f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160f78: 0x8c8400a8
    ctx->pc = 0x160f78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x160f7c: 0xdfbf0000
    ctx->pc = 0x160f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160f80: 0x805f4b6
    ctx->pc = 0x160F80u;
    ctx->pc = 0x160F84u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D2D8u;
    entry_17d2d8_0x17d2e8(rdram, ctx, runtime); return;
    ctx->pc = 0x160F88u;
    // 0x160f88: 0x27bdff40
    ctx->pc = 0x160f88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x160f8c: 0xffb10098
    ctx->pc = 0x160f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x160f90: 0x80882d
    ctx->pc = 0x160f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160f94: 0xffb200a0
    ctx->pc = 0x160f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x160f98: 0xa0902d
    ctx->pc = 0x160f98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160f9c: 0xffb300a8
    ctx->pc = 0x160f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x160fa0: 0xffb00090
    ctx->pc = 0x160fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x160fa4: 0xffbf00b0
    ctx->pc = 0x160fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x160fa8: 0xc057ff0
    ctx->pc = 0x160FA8u;
    SET_GPR_U32(ctx, 31, 0x160FB0u);
    ctx->pc = 0x160FACu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160FB0u; }
    }
    if (ctx->pc != 0x160FB0u) { return; }
    ctx->pc = 0x160FB0u;
    // 0x160fb0: 0x54400007
    ctx->pc = 0x160FB0u;
    {
        const bool branch_taken_0x160fb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x160fb0) {
            ctx->pc = 0x160FB4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x160FD0u;
            goto label_160fd0;
        }
    }
    ctx->pc = 0x160FB8u;
    // 0x160fb8: 0x3c040024
    ctx->pc = 0x160fb8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x160fbc: 0xc058dd4
    ctx->pc = 0x160FBCu;
    SET_GPR_U32(ctx, 31, 0x160FC4u);
    ctx->pc = 0x160FC0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965568));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160FC4u; }
    }
    if (ctx->pc != 0x160FC4u) { return; }
    ctx->pc = 0x160FC4u;
    // 0x160fc4: 0x10000014
    ctx->pc = 0x160FC4u;
    {
        const bool branch_taken_0x160fc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160FC8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x160fc4) {
            ctx->pc = 0x161018u;
            goto label_161018;
        }
    }
    ctx->pc = 0x160FCCu;
    // 0x160fcc: 0x0
    ctx->pc = 0x160fccu;
    // NOP
label_160fd0:
    // 0x160fd0: 0x14400005
    ctx->pc = 0x160FD0u;
    {
        const bool branch_taken_0x160fd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x160FD4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x160fd0) {
            ctx->pc = 0x160FE8u;
            goto label_160fe8;
        }
    }
    ctx->pc = 0x160FD8u;
    // 0x160fd8: 0xc058dd4
    ctx->pc = 0x160FD8u;
    SET_GPR_U32(ctx, 31, 0x160FE0u);
    ctx->pc = 0x160FDCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965624));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160FE0u; }
    }
    if (ctx->pc != 0x160FE0u) { return; }
    ctx->pc = 0x160FE0u;
    // 0x160fe0: 0x1000000d
    ctx->pc = 0x160FE0u;
    {
        const bool branch_taken_0x160fe0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160FE4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x160fe0) {
            ctx->pc = 0x161018u;
            goto label_161018;
        }
    }
    ctx->pc = 0x160FE8u;
label_160fe8:
    // 0x160fe8: 0xc0582e4
    ctx->pc = 0x160FE8u;
    SET_GPR_U32(ctx, 31, 0x160FF0u);
    ctx->pc = 0x160FECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B90_0x160b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160FF0u; }
    }
    if (ctx->pc != 0x160FF0u) { return; }
    ctx->pc = 0x160FF0u;
    // 0x160ff0: 0x220202d
    ctx->pc = 0x160ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160ff4: 0x240282d
    ctx->pc = 0x160ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160ff8: 0x3a0302d
    ctx->pc = 0x160ff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160ffc: 0xc0582ee
    ctx->pc = 0x160FFCu;
    SET_GPR_U32(ctx, 31, 0x161004u);
    ctx->pc = 0x161000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160BB8_0x160bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161004u; }
    }
    if (ctx->pc != 0x161004u) { return; }
    ctx->pc = 0x161004u;
    // 0x161004: 0x3a0282d
    ctx->pc = 0x161004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161008: 0x200202d
    ctx->pc = 0x161008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16100c: 0xc05ea06
    ctx->pc = 0x16100Cu;
    SET_GPR_U32(ctx, 31, 0x161014u);
    ctx->pc = 0x161010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17A818u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A818_0x17a818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161014u; }
    }
    if (ctx->pc != 0x161014u) { return; }
    ctx->pc = 0x161014u;
    // 0x161014: 0xdfb00090
    ctx->pc = 0x161014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_161018:
    // 0x161018: 0xdfb10098
    ctx->pc = 0x161018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16101c: 0xdfb200a0
    ctx->pc = 0x16101cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x161020: 0xdfb300a8
    ctx->pc = 0x161020u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x161024: 0xdfbf00b0
    ctx->pc = 0x161024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x161028: 0x3e00008
    ctx->pc = 0x161028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16102Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160F30u: goto label_160f30;
            case 0x160F38u: goto label_160f38;
            case 0x160F40u: goto label_160f40;
            case 0x160F44u: goto label_160f44;
            case 0x160FD0u: goto label_160fd0;
            case 0x160FE8u: goto label_160fe8;
            case 0x161018u: goto label_161018;
            case 0x161078u: goto label_161078;
            case 0x161090u: goto label_161090;
            case 0x1610C0u: goto label_1610c0;
            case 0x161128u: goto label_161128;
            case 0x161148u: goto label_161148;
            case 0x16117Cu: goto label_16117c;
            case 0x1611E0u: goto label_1611e0;
            case 0x1611F8u: goto label_1611f8;
            case 0x161228u: goto label_161228;
            case 0x161288u: goto label_161288;
            case 0x1612A0u: goto label_1612a0;
            case 0x1612D0u: goto label_1612d0;
            case 0x161330u: goto label_161330;
            case 0x161348u: goto label_161348;
            case 0x161378u: goto label_161378;
            case 0x1613D8u: goto label_1613d8;
            case 0x1613F0u: goto label_1613f0;
            case 0x161420u: goto label_161420;
            case 0x161478u: goto label_161478;
            case 0x1614A8u: goto label_1614a8;
            case 0x1614D0u: goto label_1614d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161030u;
    // 0x161030: 0x27bdff40
    ctx->pc = 0x161030u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x161034: 0xffb10098
    ctx->pc = 0x161034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x161038: 0x80882d
    ctx->pc = 0x161038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16103c: 0xffb200a0
    ctx->pc = 0x16103cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x161040: 0xa0902d
    ctx->pc = 0x161040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161044: 0xffb300a8
    ctx->pc = 0x161044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x161048: 0xffb00090
    ctx->pc = 0x161048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x16104c: 0xffbf00b0
    ctx->pc = 0x16104cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x161050: 0xc057ff0
    ctx->pc = 0x161050u;
    SET_GPR_U32(ctx, 31, 0x161058u);
    ctx->pc = 0x161054u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161058u; }
    }
    if (ctx->pc != 0x161058u) { return; }
    ctx->pc = 0x161058u;
    // 0x161058: 0x54400007
    ctx->pc = 0x161058u;
    {
        const bool branch_taken_0x161058 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x161058) {
            ctx->pc = 0x16105Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x161078u;
            goto label_161078;
        }
    }
    ctx->pc = 0x161060u;
    // 0x161060: 0x3c040024
    ctx->pc = 0x161060u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x161064: 0xc058dd4
    ctx->pc = 0x161064u;
    SET_GPR_U32(ctx, 31, 0x16106Cu);
    ctx->pc = 0x161068u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965680));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16106Cu; }
    }
    if (ctx->pc != 0x16106Cu) { return; }
    ctx->pc = 0x16106Cu;
    // 0x16106c: 0x10000014
    ctx->pc = 0x16106Cu;
    {
        const bool branch_taken_0x16106c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x161070u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x16106c) {
            ctx->pc = 0x1610C0u;
            goto label_1610c0;
        }
    }
    ctx->pc = 0x161074u;
    // 0x161074: 0x0
    ctx->pc = 0x161074u;
    // NOP
label_161078:
    // 0x161078: 0x14400005
    ctx->pc = 0x161078u;
    {
        const bool branch_taken_0x161078 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16107Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x161078) {
            ctx->pc = 0x161090u;
            goto label_161090;
        }
    }
    ctx->pc = 0x161080u;
    // 0x161080: 0xc058dd4
    ctx->pc = 0x161080u;
    SET_GPR_U32(ctx, 31, 0x161088u);
    ctx->pc = 0x161084u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965736));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161088u; }
    }
    if (ctx->pc != 0x161088u) { return; }
    ctx->pc = 0x161088u;
    // 0x161088: 0x1000000d
    ctx->pc = 0x161088u;
    {
        const bool branch_taken_0x161088 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16108Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x161088) {
            ctx->pc = 0x1610C0u;
            goto label_1610c0;
        }
    }
    ctx->pc = 0x161090u;
label_161090:
    // 0x161090: 0xc0582e4
    ctx->pc = 0x161090u;
    SET_GPR_U32(ctx, 31, 0x161098u);
    ctx->pc = 0x161094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B90_0x160b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161098u; }
    }
    if (ctx->pc != 0x161098u) { return; }
    ctx->pc = 0x161098u;
    // 0x161098: 0x220202d
    ctx->pc = 0x161098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16109c: 0x240282d
    ctx->pc = 0x16109cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610a0: 0x3a0302d
    ctx->pc = 0x1610a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610a4: 0xc0582ee
    ctx->pc = 0x1610A4u;
    SET_GPR_U32(ctx, 31, 0x1610ACu);
    ctx->pc = 0x1610A8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160BB8_0x160bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1610ACu; }
    }
    if (ctx->pc != 0x1610ACu) { return; }
    ctx->pc = 0x1610ACu;
    // 0x1610ac: 0x3a0282d
    ctx->pc = 0x1610acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610b0: 0x200202d
    ctx->pc = 0x1610b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610b4: 0xc05ee88
    ctx->pc = 0x1610B4u;
    SET_GPR_U32(ctx, 31, 0x1610BCu);
    ctx->pc = 0x1610B8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17BA20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017BA20_0x17ba20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1610BCu; }
    }
    if (ctx->pc != 0x1610BCu) { return; }
    ctx->pc = 0x1610BCu;
    // 0x1610bc: 0xdfb00090
    ctx->pc = 0x1610bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1610c0:
    // 0x1610c0: 0xdfb10098
    ctx->pc = 0x1610c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1610c4: 0xdfb200a0
    ctx->pc = 0x1610c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1610c8: 0xdfb300a8
    ctx->pc = 0x1610c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1610cc: 0xdfbf00b0
    ctx->pc = 0x1610ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1610d0: 0x3e00008
    ctx->pc = 0x1610D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1610D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160F30u: goto label_160f30;
            case 0x160F38u: goto label_160f38;
            case 0x160F40u: goto label_160f40;
            case 0x160F44u: goto label_160f44;
            case 0x160FD0u: goto label_160fd0;
            case 0x160FE8u: goto label_160fe8;
            case 0x161018u: goto label_161018;
            case 0x161078u: goto label_161078;
            case 0x161090u: goto label_161090;
            case 0x1610C0u: goto label_1610c0;
            case 0x161128u: goto label_161128;
            case 0x161148u: goto label_161148;
            case 0x16117Cu: goto label_16117c;
            case 0x1611E0u: goto label_1611e0;
            case 0x1611F8u: goto label_1611f8;
            case 0x161228u: goto label_161228;
            case 0x161288u: goto label_161288;
            case 0x1612A0u: goto label_1612a0;
            case 0x1612D0u: goto label_1612d0;
            case 0x161330u: goto label_161330;
            case 0x161348u: goto label_161348;
            case 0x161378u: goto label_161378;
            case 0x1613D8u: goto label_1613d8;
            case 0x1613F0u: goto label_1613f0;
            case 0x161420u: goto label_161420;
            case 0x161478u: goto label_161478;
            case 0x1614A8u: goto label_1614a8;
            case 0x1614D0u: goto label_1614d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1610D8u;
    // 0x1610d8: 0x27bdff40
    ctx->pc = 0x1610d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1610dc: 0xffb10098
    ctx->pc = 0x1610dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x1610e0: 0x80882d
    ctx->pc = 0x1610e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610e4: 0xffb200a0
    ctx->pc = 0x1610e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x1610e8: 0xa0902d
    ctx->pc = 0x1610e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610ec: 0xffb300a8
    ctx->pc = 0x1610ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x1610f0: 0xc0982d
    ctx->pc = 0x1610f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610f4: 0xffb400b0
    ctx->pc = 0x1610f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x1610f8: 0xffb00090
    ctx->pc = 0x1610f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x1610fc: 0xffbf00b8
    ctx->pc = 0x1610fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x161100: 0xc057ff0
    ctx->pc = 0x161100u;
    SET_GPR_U32(ctx, 31, 0x161108u);
    ctx->pc = 0x161104u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161108u; }
    }
    if (ctx->pc != 0x161108u) { return; }
    ctx->pc = 0x161108u;
    // 0x161108: 0x3c040024
    ctx->pc = 0x161108u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x16110c: 0x14400006
    ctx->pc = 0x16110Cu;
    {
        const bool branch_taken_0x16110c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x161110u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965784));
        if (branch_taken_0x16110c) {
            ctx->pc = 0x161128u;
            goto label_161128;
        }
    }
    ctx->pc = 0x161114u;
    // 0x161114: 0xc058dd4
    ctx->pc = 0x161114u;
    SET_GPR_U32(ctx, 31, 0x16111Cu);
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16111Cu; }
    }
    if (ctx->pc != 0x16111Cu) { return; }
    ctx->pc = 0x16111Cu;
    // 0x16111c: 0x10000017
    ctx->pc = 0x16111Cu;
    {
        const bool branch_taken_0x16111c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x161120u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x16111c) {
            ctx->pc = 0x16117Cu;
            goto label_16117c;
        }
    }
    ctx->pc = 0x161124u;
    // 0x161124: 0x0
    ctx->pc = 0x161124u;
    // NOP
label_161128:
    // 0x161128: 0x8e420000
    ctx->pc = 0x161128u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16112c: 0x14400006
    ctx->pc = 0x16112Cu;
    {
        const bool branch_taken_0x16112c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x161130u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x16112c) {
            ctx->pc = 0x161148u;
            goto label_161148;
        }
    }
    ctx->pc = 0x161134u;
    // 0x161134: 0xc058dd4
    ctx->pc = 0x161134u;
    SET_GPR_U32(ctx, 31, 0x16113Cu);
    ctx->pc = 0x161138u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965840));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16113Cu; }
    }
    if (ctx->pc != 0x16113Cu) { return; }
    ctx->pc = 0x16113Cu;
    // 0x16113c: 0x1000000f
    ctx->pc = 0x16113Cu;
    {
        const bool branch_taken_0x16113c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x161140u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x16113c) {
            ctx->pc = 0x16117Cu;
            goto label_16117c;
        }
    }
    ctx->pc = 0x161144u;
    // 0x161144: 0x0
    ctx->pc = 0x161144u;
    // NOP
label_161148:
    // 0x161148: 0xc0582e4
    ctx->pc = 0x161148u;
    SET_GPR_U32(ctx, 31, 0x161150u);
    ctx->pc = 0x16114Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B90_0x160b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161150u; }
    }
    if (ctx->pc != 0x161150u) { return; }
    ctx->pc = 0x161150u;
    // 0x161150: 0x220202d
    ctx->pc = 0x161150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161154: 0x240282d
    ctx->pc = 0x161154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161158: 0x3a0302d
    ctx->pc = 0x161158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16115c: 0xc0582ee
    ctx->pc = 0x16115Cu;
    SET_GPR_U32(ctx, 31, 0x161164u);
    ctx->pc = 0x161160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160BB8_0x160bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161164u; }
    }
    if (ctx->pc != 0x161164u) { return; }
    ctx->pc = 0x161164u;
    // 0x161164: 0x3a0282d
    ctx->pc = 0x161164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161168: 0x200202d
    ctx->pc = 0x161168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16116c: 0x260302d
    ctx->pc = 0x16116cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161170: 0xc05efb6
    ctx->pc = 0x161170u;
    SET_GPR_U32(ctx, 31, 0x161178u);
    ctx->pc = 0x161174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17BED8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017BED8_0x17bed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161178u; }
    }
    if (ctx->pc != 0x161178u) { return; }
    ctx->pc = 0x161178u;
    // 0x161178: 0xdfb00090
    ctx->pc = 0x161178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_16117c:
    // 0x16117c: 0xdfb10098
    ctx->pc = 0x16117cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x161180: 0xdfb200a0
    ctx->pc = 0x161180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x161184: 0xdfb300a8
    ctx->pc = 0x161184u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x161188: 0xdfb400b0
    ctx->pc = 0x161188u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16118c: 0xdfbf00b8
    ctx->pc = 0x16118cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x161190: 0x3e00008
    ctx->pc = 0x161190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161194u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160F30u: goto label_160f30;
            case 0x160F38u: goto label_160f38;
            case 0x160F40u: goto label_160f40;
            case 0x160F44u: goto label_160f44;
            case 0x160FD0u: goto label_160fd0;
            case 0x160FE8u: goto label_160fe8;
            case 0x161018u: goto label_161018;
            case 0x161078u: goto label_161078;
            case 0x161090u: goto label_161090;
            case 0x1610C0u: goto label_1610c0;
            case 0x161128u: goto label_161128;
            case 0x161148u: goto label_161148;
            case 0x16117Cu: goto label_16117c;
            case 0x1611E0u: goto label_1611e0;
            case 0x1611F8u: goto label_1611f8;
            case 0x161228u: goto label_161228;
            case 0x161288u: goto label_161288;
            case 0x1612A0u: goto label_1612a0;
            case 0x1612D0u: goto label_1612d0;
            case 0x161330u: goto label_161330;
            case 0x161348u: goto label_161348;
            case 0x161378u: goto label_161378;
            case 0x1613D8u: goto label_1613d8;
            case 0x1613F0u: goto label_1613f0;
            case 0x161420u: goto label_161420;
            case 0x161478u: goto label_161478;
            case 0x1614A8u: goto label_1614a8;
            case 0x1614D0u: goto label_1614d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161198u;
    // 0x161198: 0x27bdff40
    ctx->pc = 0x161198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x16119c: 0xffb10098
    ctx->pc = 0x16119cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x1611a0: 0x80882d
    ctx->pc = 0x1611a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1611a4: 0xffb200a0
    ctx->pc = 0x1611a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x1611a8: 0xa0902d
    ctx->pc = 0x1611a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1611ac: 0xffb300a8
    ctx->pc = 0x1611acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x1611b0: 0xffb00090
    ctx->pc = 0x1611b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x1611b4: 0xffbf00b0
    ctx->pc = 0x1611b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1611b8: 0xc057ff0
    ctx->pc = 0x1611B8u;
    SET_GPR_U32(ctx, 31, 0x1611C0u);
    ctx->pc = 0x1611BCu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1611C0u; }
    }
    if (ctx->pc != 0x1611C0u) { return; }
    ctx->pc = 0x1611C0u;
    // 0x1611c0: 0x54400007
    ctx->pc = 0x1611C0u;
    {
        const bool branch_taken_0x1611c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1611c0) {
            ctx->pc = 0x1611C4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x1611E0u;
            goto label_1611e0;
        }
    }
    ctx->pc = 0x1611C8u;
    // 0x1611c8: 0x3c040024
    ctx->pc = 0x1611c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1611cc: 0xc058dd4
    ctx->pc = 0x1611CCu;
    SET_GPR_U32(ctx, 31, 0x1611D4u);
    ctx->pc = 0x1611D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965896));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1611D4u; }
    }
    if (ctx->pc != 0x1611D4u) { return; }
    ctx->pc = 0x1611D4u;
    // 0x1611d4: 0x10000014
    ctx->pc = 0x1611D4u;
    {
        const bool branch_taken_0x1611d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1611D8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x1611d4) {
            ctx->pc = 0x161228u;
            goto label_161228;
        }
    }
    ctx->pc = 0x1611DCu;
    // 0x1611dc: 0x0
    ctx->pc = 0x1611dcu;
    // NOP
label_1611e0:
    // 0x1611e0: 0x14400005
    ctx->pc = 0x1611E0u;
    {
        const bool branch_taken_0x1611e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1611E4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x1611e0) {
            ctx->pc = 0x1611F8u;
            goto label_1611f8;
        }
    }
    ctx->pc = 0x1611E8u;
    // 0x1611e8: 0xc058dd4
    ctx->pc = 0x1611E8u;
    SET_GPR_U32(ctx, 31, 0x1611F0u);
    ctx->pc = 0x1611ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965952));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1611F0u; }
    }
    if (ctx->pc != 0x1611F0u) { return; }
    ctx->pc = 0x1611F0u;
    // 0x1611f0: 0x1000000d
    ctx->pc = 0x1611F0u;
    {
        const bool branch_taken_0x1611f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1611F4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x1611f0) {
            ctx->pc = 0x161228u;
            goto label_161228;
        }
    }
    ctx->pc = 0x1611F8u;
label_1611f8:
    // 0x1611f8: 0xc0582e4
    ctx->pc = 0x1611F8u;
    SET_GPR_U32(ctx, 31, 0x161200u);
    ctx->pc = 0x1611FCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B90_0x160b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161200u; }
    }
    if (ctx->pc != 0x161200u) { return; }
    ctx->pc = 0x161200u;
    // 0x161200: 0x220202d
    ctx->pc = 0x161200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161204: 0x240282d
    ctx->pc = 0x161204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161208: 0x3a0302d
    ctx->pc = 0x161208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16120c: 0xc0582ee
    ctx->pc = 0x16120Cu;
    SET_GPR_U32(ctx, 31, 0x161214u);
    ctx->pc = 0x161210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160BB8_0x160bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161214u; }
    }
    if (ctx->pc != 0x161214u) { return; }
    ctx->pc = 0x161214u;
    // 0x161214: 0x3a0282d
    ctx->pc = 0x161214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161218: 0x200202d
    ctx->pc = 0x161218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16121c: 0xc05ed4c
    ctx->pc = 0x16121Cu;
    SET_GPR_U32(ctx, 31, 0x161224u);
    ctx->pc = 0x161220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17B530u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B530_0x17b530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161224u; }
    }
    if (ctx->pc != 0x161224u) { return; }
    ctx->pc = 0x161224u;
    // 0x161224: 0xdfb00090
    ctx->pc = 0x161224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_161228:
    // 0x161228: 0xdfb10098
    ctx->pc = 0x161228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16122c: 0xdfb200a0
    ctx->pc = 0x16122cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x161230: 0xdfb300a8
    ctx->pc = 0x161230u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x161234: 0xdfbf00b0
    ctx->pc = 0x161234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x161238: 0x3e00008
    ctx->pc = 0x161238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16123Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160F30u: goto label_160f30;
            case 0x160F38u: goto label_160f38;
            case 0x160F40u: goto label_160f40;
            case 0x160F44u: goto label_160f44;
            case 0x160FD0u: goto label_160fd0;
            case 0x160FE8u: goto label_160fe8;
            case 0x161018u: goto label_161018;
            case 0x161078u: goto label_161078;
            case 0x161090u: goto label_161090;
            case 0x1610C0u: goto label_1610c0;
            case 0x161128u: goto label_161128;
            case 0x161148u: goto label_161148;
            case 0x16117Cu: goto label_16117c;
            case 0x1611E0u: goto label_1611e0;
            case 0x1611F8u: goto label_1611f8;
            case 0x161228u: goto label_161228;
            case 0x161288u: goto label_161288;
            case 0x1612A0u: goto label_1612a0;
            case 0x1612D0u: goto label_1612d0;
            case 0x161330u: goto label_161330;
            case 0x161348u: goto label_161348;
            case 0x161378u: goto label_161378;
            case 0x1613D8u: goto label_1613d8;
            case 0x1613F0u: goto label_1613f0;
            case 0x161420u: goto label_161420;
            case 0x161478u: goto label_161478;
            case 0x1614A8u: goto label_1614a8;
            case 0x1614D0u: goto label_1614d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161240u;
    // 0x161240: 0x27bdff40
    ctx->pc = 0x161240u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x161244: 0xffb10098
    ctx->pc = 0x161244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x161248: 0x80882d
    ctx->pc = 0x161248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16124c: 0xffb200a0
    ctx->pc = 0x16124cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x161250: 0xa0902d
    ctx->pc = 0x161250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161254: 0xffb300a8
    ctx->pc = 0x161254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x161258: 0xffb00090
    ctx->pc = 0x161258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x16125c: 0xffbf00b0
    ctx->pc = 0x16125cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x161260: 0xc057ff0
    ctx->pc = 0x161260u;
    SET_GPR_U32(ctx, 31, 0x161268u);
    ctx->pc = 0x161264u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161268u; }
    }
    if (ctx->pc != 0x161268u) { return; }
    ctx->pc = 0x161268u;
    // 0x161268: 0x54400007
    ctx->pc = 0x161268u;
    {
        const bool branch_taken_0x161268 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x161268) {
            ctx->pc = 0x16126Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x161288u;
            goto label_161288;
        }
    }
    ctx->pc = 0x161270u;
    // 0x161270: 0x3c040024
    ctx->pc = 0x161270u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x161274: 0xc058dd4
    ctx->pc = 0x161274u;
    SET_GPR_U32(ctx, 31, 0x16127Cu);
    ctx->pc = 0x161278u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966008));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16127Cu; }
    }
    if (ctx->pc != 0x16127Cu) { return; }
    ctx->pc = 0x16127Cu;
    // 0x16127c: 0x10000014
    ctx->pc = 0x16127Cu;
    {
        const bool branch_taken_0x16127c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x161280u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x16127c) {
            ctx->pc = 0x1612D0u;
            goto label_1612d0;
        }
    }
    ctx->pc = 0x161284u;
    // 0x161284: 0x0
    ctx->pc = 0x161284u;
    // NOP
label_161288:
    // 0x161288: 0x14400005
    ctx->pc = 0x161288u;
    {
        const bool branch_taken_0x161288 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16128Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x161288) {
            ctx->pc = 0x1612A0u;
            goto label_1612a0;
        }
    }
    ctx->pc = 0x161290u;
    // 0x161290: 0xc058dd4
    ctx->pc = 0x161290u;
    SET_GPR_U32(ctx, 31, 0x161298u);
    ctx->pc = 0x161294u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966064));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161298u; }
    }
    if (ctx->pc != 0x161298u) { return; }
    ctx->pc = 0x161298u;
    // 0x161298: 0x1000000d
    ctx->pc = 0x161298u;
    {
        const bool branch_taken_0x161298 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16129Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x161298) {
            ctx->pc = 0x1612D0u;
            goto label_1612d0;
        }
    }
    ctx->pc = 0x1612A0u;
label_1612a0:
    // 0x1612a0: 0xc0582e4
    ctx->pc = 0x1612A0u;
    SET_GPR_U32(ctx, 31, 0x1612A8u);
    ctx->pc = 0x1612A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B90_0x160b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1612A8u; }
    }
    if (ctx->pc != 0x1612A8u) { return; }
    ctx->pc = 0x1612A8u;
    // 0x1612a8: 0x220202d
    ctx->pc = 0x1612a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612ac: 0x240282d
    ctx->pc = 0x1612acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612b0: 0x3a0302d
    ctx->pc = 0x1612b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612b4: 0xc0582ee
    ctx->pc = 0x1612B4u;
    SET_GPR_U32(ctx, 31, 0x1612BCu);
    ctx->pc = 0x1612B8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160BB8_0x160bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1612BCu; }
    }
    if (ctx->pc != 0x1612BCu) { return; }
    ctx->pc = 0x1612BCu;
    // 0x1612bc: 0x3a0282d
    ctx->pc = 0x1612bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612c0: 0x200202d
    ctx->pc = 0x1612c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612c4: 0xc05f284
    ctx->pc = 0x1612C4u;
    SET_GPR_U32(ctx, 31, 0x1612CCu);
    ctx->pc = 0x1612C8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17CA10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CA10_0x17ca10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1612CCu; }
    }
    if (ctx->pc != 0x1612CCu) { return; }
    ctx->pc = 0x1612CCu;
    // 0x1612cc: 0xdfb00090
    ctx->pc = 0x1612ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1612d0:
    // 0x1612d0: 0xdfb10098
    ctx->pc = 0x1612d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1612d4: 0xdfb200a0
    ctx->pc = 0x1612d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1612d8: 0xdfb300a8
    ctx->pc = 0x1612d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1612dc: 0xdfbf00b0
    ctx->pc = 0x1612dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1612e0: 0x3e00008
    ctx->pc = 0x1612E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1612E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160F30u: goto label_160f30;
            case 0x160F38u: goto label_160f38;
            case 0x160F40u: goto label_160f40;
            case 0x160F44u: goto label_160f44;
            case 0x160FD0u: goto label_160fd0;
            case 0x160FE8u: goto label_160fe8;
            case 0x161018u: goto label_161018;
            case 0x161078u: goto label_161078;
            case 0x161090u: goto label_161090;
            case 0x1610C0u: goto label_1610c0;
            case 0x161128u: goto label_161128;
            case 0x161148u: goto label_161148;
            case 0x16117Cu: goto label_16117c;
            case 0x1611E0u: goto label_1611e0;
            case 0x1611F8u: goto label_1611f8;
            case 0x161228u: goto label_161228;
            case 0x161288u: goto label_161288;
            case 0x1612A0u: goto label_1612a0;
            case 0x1612D0u: goto label_1612d0;
            case 0x161330u: goto label_161330;
            case 0x161348u: goto label_161348;
            case 0x161378u: goto label_161378;
            case 0x1613D8u: goto label_1613d8;
            case 0x1613F0u: goto label_1613f0;
            case 0x161420u: goto label_161420;
            case 0x161478u: goto label_161478;
            case 0x1614A8u: goto label_1614a8;
            case 0x1614D0u: goto label_1614d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1612E8u;
    // 0x1612e8: 0x27bdff40
    ctx->pc = 0x1612e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1612ec: 0xffb10098
    ctx->pc = 0x1612ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x1612f0: 0x80882d
    ctx->pc = 0x1612f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612f4: 0xffb200a0
    ctx->pc = 0x1612f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x1612f8: 0xa0902d
    ctx->pc = 0x1612f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612fc: 0xffb300a8
    ctx->pc = 0x1612fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x161300: 0xffb00090
    ctx->pc = 0x161300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x161304: 0xffbf00b0
    ctx->pc = 0x161304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x161308: 0xc057ff0
    ctx->pc = 0x161308u;
    SET_GPR_U32(ctx, 31, 0x161310u);
    ctx->pc = 0x16130Cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161310u; }
    }
    if (ctx->pc != 0x161310u) { return; }
    ctx->pc = 0x161310u;
    // 0x161310: 0x54400007
    ctx->pc = 0x161310u;
    {
        const bool branch_taken_0x161310 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x161310) {
            ctx->pc = 0x161314u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x161330u;
            goto label_161330;
        }
    }
    ctx->pc = 0x161318u;
    // 0x161318: 0x3c040024
    ctx->pc = 0x161318u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x16131c: 0xc058dd4
    ctx->pc = 0x16131Cu;
    SET_GPR_U32(ctx, 31, 0x161324u);
    ctx->pc = 0x161320u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966112));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161324u; }
    }
    if (ctx->pc != 0x161324u) { return; }
    ctx->pc = 0x161324u;
    // 0x161324: 0x10000014
    ctx->pc = 0x161324u;
    {
        const bool branch_taken_0x161324 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x161328u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x161324) {
            ctx->pc = 0x161378u;
            goto label_161378;
        }
    }
    ctx->pc = 0x16132Cu;
    // 0x16132c: 0x0
    ctx->pc = 0x16132cu;
    // NOP
label_161330:
    // 0x161330: 0x14400005
    ctx->pc = 0x161330u;
    {
        const bool branch_taken_0x161330 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x161334u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x161330) {
            ctx->pc = 0x161348u;
            goto label_161348;
        }
    }
    ctx->pc = 0x161338u;
    // 0x161338: 0xc058dd4
    ctx->pc = 0x161338u;
    SET_GPR_U32(ctx, 31, 0x161340u);
    ctx->pc = 0x16133Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966160));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161340u; }
    }
    if (ctx->pc != 0x161340u) { return; }
    ctx->pc = 0x161340u;
    // 0x161340: 0x1000000d
    ctx->pc = 0x161340u;
    {
        const bool branch_taken_0x161340 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x161344u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x161340) {
            ctx->pc = 0x161378u;
            goto label_161378;
        }
    }
    ctx->pc = 0x161348u;
label_161348:
    // 0x161348: 0xc0582e4
    ctx->pc = 0x161348u;
    SET_GPR_U32(ctx, 31, 0x161350u);
    ctx->pc = 0x16134Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B90_0x160b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161350u; }
    }
    if (ctx->pc != 0x161350u) { return; }
    ctx->pc = 0x161350u;
    // 0x161350: 0x220202d
    ctx->pc = 0x161350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161354: 0x240282d
    ctx->pc = 0x161354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161358: 0x3a0302d
    ctx->pc = 0x161358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16135c: 0xc0582ee
    ctx->pc = 0x16135Cu;
    SET_GPR_U32(ctx, 31, 0x161364u);
    ctx->pc = 0x161360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160BB8_0x160bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161364u; }
    }
    if (ctx->pc != 0x161364u) { return; }
    ctx->pc = 0x161364u;
    // 0x161364: 0x3a0282d
    ctx->pc = 0x161364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161368: 0x200202d
    ctx->pc = 0x161368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16136c: 0xc05f040
    ctx->pc = 0x16136Cu;
    SET_GPR_U32(ctx, 31, 0x161374u);
    ctx->pc = 0x161370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17C100u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C100_0x17c100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161374u; }
    }
    if (ctx->pc != 0x161374u) { return; }
    ctx->pc = 0x161374u;
    // 0x161374: 0xdfb00090
    ctx->pc = 0x161374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_161378:
    // 0x161378: 0xdfb10098
    ctx->pc = 0x161378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16137c: 0xdfb200a0
    ctx->pc = 0x16137cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x161380: 0xdfb300a8
    ctx->pc = 0x161380u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x161384: 0xdfbf00b0
    ctx->pc = 0x161384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x161388: 0x3e00008
    ctx->pc = 0x161388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16138Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160F30u: goto label_160f30;
            case 0x160F38u: goto label_160f38;
            case 0x160F40u: goto label_160f40;
            case 0x160F44u: goto label_160f44;
            case 0x160FD0u: goto label_160fd0;
            case 0x160FE8u: goto label_160fe8;
            case 0x161018u: goto label_161018;
            case 0x161078u: goto label_161078;
            case 0x161090u: goto label_161090;
            case 0x1610C0u: goto label_1610c0;
            case 0x161128u: goto label_161128;
            case 0x161148u: goto label_161148;
            case 0x16117Cu: goto label_16117c;
            case 0x1611E0u: goto label_1611e0;
            case 0x1611F8u: goto label_1611f8;
            case 0x161228u: goto label_161228;
            case 0x161288u: goto label_161288;
            case 0x1612A0u: goto label_1612a0;
            case 0x1612D0u: goto label_1612d0;
            case 0x161330u: goto label_161330;
            case 0x161348u: goto label_161348;
            case 0x161378u: goto label_161378;
            case 0x1613D8u: goto label_1613d8;
            case 0x1613F0u: goto label_1613f0;
            case 0x161420u: goto label_161420;
            case 0x161478u: goto label_161478;
            case 0x1614A8u: goto label_1614a8;
            case 0x1614D0u: goto label_1614d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161390u;
    // 0x161390: 0x27bdff40
    ctx->pc = 0x161390u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x161394: 0xffb10098
    ctx->pc = 0x161394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x161398: 0x80882d
    ctx->pc = 0x161398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16139c: 0xffb200a0
    ctx->pc = 0x16139cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x1613a0: 0xa0902d
    ctx->pc = 0x1613a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1613a4: 0xffb300a8
    ctx->pc = 0x1613a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x1613a8: 0xffb00090
    ctx->pc = 0x1613a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x1613ac: 0xffbf00b0
    ctx->pc = 0x1613acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1613b0: 0xc057ff0
    ctx->pc = 0x1613B0u;
    SET_GPR_U32(ctx, 31, 0x1613B8u);
    ctx->pc = 0x1613B4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1613B8u; }
    }
    if (ctx->pc != 0x1613B8u) { return; }
    ctx->pc = 0x1613B8u;
    // 0x1613b8: 0x54400007
    ctx->pc = 0x1613B8u;
    {
        const bool branch_taken_0x1613b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1613b8) {
            ctx->pc = 0x1613BCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x1613D8u;
            goto label_1613d8;
        }
    }
    ctx->pc = 0x1613C0u;
    // 0x1613c0: 0x3c040024
    ctx->pc = 0x1613c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1613c4: 0xc058dd4
    ctx->pc = 0x1613C4u;
    SET_GPR_U32(ctx, 31, 0x1613CCu);
    ctx->pc = 0x1613C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966208));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1613CCu; }
    }
    if (ctx->pc != 0x1613CCu) { return; }
    ctx->pc = 0x1613CCu;
    // 0x1613cc: 0x10000014
    ctx->pc = 0x1613CCu;
    {
        const bool branch_taken_0x1613cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1613D0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x1613cc) {
            ctx->pc = 0x161420u;
            goto label_161420;
        }
    }
    ctx->pc = 0x1613D4u;
    // 0x1613d4: 0x0
    ctx->pc = 0x1613d4u;
    // NOP
label_1613d8:
    // 0x1613d8: 0x14400005
    ctx->pc = 0x1613D8u;
    {
        const bool branch_taken_0x1613d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1613DCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x1613d8) {
            ctx->pc = 0x1613F0u;
            goto label_1613f0;
        }
    }
    ctx->pc = 0x1613E0u;
    // 0x1613e0: 0xc058dd4
    ctx->pc = 0x1613E0u;
    SET_GPR_U32(ctx, 31, 0x1613E8u);
    ctx->pc = 0x1613E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966256));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1613E8u; }
    }
    if (ctx->pc != 0x1613E8u) { return; }
    ctx->pc = 0x1613E8u;
    // 0x1613e8: 0x1000000d
    ctx->pc = 0x1613E8u;
    {
        const bool branch_taken_0x1613e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1613ECu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x1613e8) {
            ctx->pc = 0x161420u;
            goto label_161420;
        }
    }
    ctx->pc = 0x1613F0u;
label_1613f0:
    // 0x1613f0: 0xc0582e4
    ctx->pc = 0x1613F0u;
    SET_GPR_U32(ctx, 31, 0x1613F8u);
    ctx->pc = 0x1613F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B90_0x160b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1613F8u; }
    }
    if (ctx->pc != 0x1613F8u) { return; }
    ctx->pc = 0x1613F8u;
    // 0x1613f8: 0x220202d
    ctx->pc = 0x1613f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1613fc: 0x240282d
    ctx->pc = 0x1613fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161400: 0x3a0302d
    ctx->pc = 0x161400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161404: 0xc0582ee
    ctx->pc = 0x161404u;
    SET_GPR_U32(ctx, 31, 0x16140Cu);
    ctx->pc = 0x161408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160BB8_0x160bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16140Cu; }
    }
    if (ctx->pc != 0x16140Cu) { return; }
    ctx->pc = 0x16140Cu;
    // 0x16140c: 0x3a0282d
    ctx->pc = 0x16140cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161410: 0x200202d
    ctx->pc = 0x161410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161414: 0xc05f050
    ctx->pc = 0x161414u;
    SET_GPR_U32(ctx, 31, 0x16141Cu);
    ctx->pc = 0x161418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17C140u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C140_0x17c140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16141Cu; }
    }
    if (ctx->pc != 0x16141Cu) { return; }
    ctx->pc = 0x16141Cu;
    // 0x16141c: 0xdfb00090
    ctx->pc = 0x16141cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_161420:
    // 0x161420: 0xdfb10098
    ctx->pc = 0x161420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x161424: 0xdfb200a0
    ctx->pc = 0x161424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x161428: 0xdfb300a8
    ctx->pc = 0x161428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16142c: 0xdfbf00b0
    ctx->pc = 0x16142cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x161430: 0x3e00008
    ctx->pc = 0x161430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161434u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160F30u: goto label_160f30;
            case 0x160F38u: goto label_160f38;
            case 0x160F40u: goto label_160f40;
            case 0x160F44u: goto label_160f44;
            case 0x160FD0u: goto label_160fd0;
            case 0x160FE8u: goto label_160fe8;
            case 0x161018u: goto label_161018;
            case 0x161078u: goto label_161078;
            case 0x161090u: goto label_161090;
            case 0x1610C0u: goto label_1610c0;
            case 0x161128u: goto label_161128;
            case 0x161148u: goto label_161148;
            case 0x16117Cu: goto label_16117c;
            case 0x1611E0u: goto label_1611e0;
            case 0x1611F8u: goto label_1611f8;
            case 0x161228u: goto label_161228;
            case 0x161288u: goto label_161288;
            case 0x1612A0u: goto label_1612a0;
            case 0x1612D0u: goto label_1612d0;
            case 0x161330u: goto label_161330;
            case 0x161348u: goto label_161348;
            case 0x161378u: goto label_161378;
            case 0x1613D8u: goto label_1613d8;
            case 0x1613F0u: goto label_1613f0;
            case 0x161420u: goto label_161420;
            case 0x161478u: goto label_161478;
            case 0x1614A8u: goto label_1614a8;
            case 0x1614D0u: goto label_1614d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161438u;
    // 0x161438: 0x27bdffe0
    ctx->pc = 0x161438u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16143c: 0xffb00000
    ctx->pc = 0x16143cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161440: 0xa0802d
    ctx->pc = 0x161440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161444: 0xffb10008
    ctx->pc = 0x161444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x161448: 0xffbf0010
    ctx->pc = 0x161448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16144c: 0xc057ff0
    ctx->pc = 0x16144Cu;
    SET_GPR_U32(ctx, 31, 0x161454u);
    ctx->pc = 0x161450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161454u; }
    }
    if (ctx->pc != 0x161454u) { return; }
    ctx->pc = 0x161454u;
    // 0x161454: 0x3c040024
    ctx->pc = 0x161454u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x161458: 0x14400007
    ctx->pc = 0x161458u;
    {
        const bool branch_taken_0x161458 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16145Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966304));
        if (branch_taken_0x161458) {
            ctx->pc = 0x161478u;
            goto label_161478;
        }
    }
    ctx->pc = 0x161460u;
    // 0x161460: 0xdfb00000
    ctx->pc = 0x161460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161464: 0xdfb10008
    ctx->pc = 0x161464u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x161468: 0xdfbf0010
    ctx->pc = 0x161468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16146c: 0x8058dd4
    ctx->pc = 0x16146Cu;
    ctx->pc = 0x161470u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x161474u;
    // 0x161474: 0x0
    ctx->pc = 0x161474u;
    // NOP
label_161478:
    // 0x161478: 0x8e2200e8
    ctx->pc = 0x161478u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x16147c: 0x14400014
    ctx->pc = 0x16147Cu;
    {
        const bool branch_taken_0x16147c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x161480u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16147c) {
            ctx->pc = 0x1614D0u;
            goto label_1614d0;
        }
    }
    ctx->pc = 0x161484u;
    // 0x161484: 0x24020101
    ctx->pc = 0x161484u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 257));
    // 0x161488: 0x16020007
    ctx->pc = 0x161488u;
    {
        const bool branch_taken_0x161488 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x16148Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x161488) {
            ctx->pc = 0x1614A8u;
            goto label_1614a8;
        }
    }
    ctx->pc = 0x161490u;
    // 0x161490: 0xdfb00000
    ctx->pc = 0x161490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161494: 0xdfb10008
    ctx->pc = 0x161494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x161498: 0x2484fc58
    ctx->pc = 0x161498u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966360));
    // 0x16149c: 0xdfbf0010
    ctx->pc = 0x16149cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1614a0: 0x8058dd4
    ctx->pc = 0x1614A0u;
    ctx->pc = 0x1614A4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x1614A8u;
label_1614a8:
    // 0x1614a8: 0x16000009
    ctx->pc = 0x1614A8u;
    {
        const bool branch_taken_0x1614a8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1614ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1614a8) {
            ctx->pc = 0x1614D0u;
            goto label_1614d0;
        }
    }
    ctx->pc = 0x1614B0u;
    // 0x1614b0: 0x3c040024
    ctx->pc = 0x1614b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1614b4: 0xdfb00000
    ctx->pc = 0x1614b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1614b8: 0xdfb10008
    ctx->pc = 0x1614b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1614bc: 0x2484fca0
    ctx->pc = 0x1614bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x1614c0: 0xdfbf0010
    ctx->pc = 0x1614c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1614c4: 0x8058dd4
    ctx->pc = 0x1614C4u;
    ctx->pc = 0x1614C8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x1614CCu;
    // 0x1614cc: 0x0
    ctx->pc = 0x1614ccu;
    // NOP
label_1614d0:
    // 0x1614d0: 0xdfb10008
    ctx->pc = 0x1614d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1614d4: 0x200282d
    ctx->pc = 0x1614d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1614d8: 0xdfb00000
    ctx->pc = 0x1614d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1614dc: 0xdfbf0010
    ctx->pc = 0x1614dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1614e0: 0x805853a
    ctx->pc = 0x1614E0u;
    ctx->pc = 0x1614E4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1614E8u;
    sub_001614E8_0x1614e8(rdram, ctx, runtime); return;
    ctx->pc = 0x1614E8u;
}
