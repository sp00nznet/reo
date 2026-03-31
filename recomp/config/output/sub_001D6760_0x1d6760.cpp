#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D6760
// Address: 0x1d6760 - 0x1d68a0
void sub_001D6760_0x1d6760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d6760u;

    // 0x1d6760: 0x27bdffb0
    ctx->pc = 0x1d6760u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d6764: 0x3c010034
    ctx->pc = 0x1d6764u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d6768: 0xffbf0020
    ctx->pc = 0x1d6768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d676c: 0x7fb10010
    ctx->pc = 0x1d676cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d6770: 0x7fb00000
    ctx->pc = 0x1d6770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d6774: 0x80882d
    ctx->pc = 0x1d6774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6778: 0x8c2245f8
    ctx->pc = 0x1d6778u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 17912)));
    // 0x1d677c: 0x10400004
    ctx->pc = 0x1D677Cu;
    {
        const bool branch_taken_0x1d677c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6780u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d677c) {
            ctx->pc = 0x1D6790u;
            goto label_1d6790;
        }
    }
    ctx->pc = 0x1D6784u;
    // 0x1d6784: 0x10000040
    ctx->pc = 0x1D6784u;
    {
        const bool branch_taken_0x1d6784 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d6784) {
            ctx->pc = 0x1D6888u;
            goto label_1d6888;
        }
    }
    ctx->pc = 0x1D678Cu;
    // 0x1d678c: 0x0
    ctx->pc = 0x1d678cu;
    // NOP
label_1d6790:
    // 0x1d6790: 0x3c010034
    ctx->pc = 0x1d6790u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d6794: 0x8c2345f0
    ctx->pc = 0x1d6794u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 17904)));
    // 0x1d6798: 0x10600003
    ctx->pc = 0x1D6798u;
    {
        const bool branch_taken_0x1d6798 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d6798) {
            ctx->pc = 0x1D67A8u;
            goto label_1d67a8;
        }
    }
    ctx->pc = 0x1D67A0u;
    // 0x1d67a0: 0x10000039
    ctx->pc = 0x1D67A0u;
    {
        const bool branch_taken_0x1d67a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d67a0) {
            ctx->pc = 0x1D6888u;
            goto label_1d6888;
        }
    }
    ctx->pc = 0x1D67A8u;
label_1d67a8:
    // 0x1d67a8: 0xc0759b8
    ctx->pc = 0x1D67A8u;
    SET_GPR_U32(ctx, 31, 0x1D67B0u);
    ctx->pc = 0x1D66E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D66E0_0x1d66e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D67B0u; }
    }
    if (ctx->pc != 0x1D67B0u) { return; }
    ctx->pc = 0x1D67B0u;
    // 0x1d67b0: 0x14400003
    ctx->pc = 0x1D67B0u;
    {
        const bool branch_taken_0x1d67b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D67B4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
        if (branch_taken_0x1d67b0) {
            ctx->pc = 0x1D67C0u;
            goto label_1d67c0;
        }
    }
    ctx->pc = 0x1D67B8u;
    // 0x1d67b8: 0x10000033
    ctx->pc = 0x1D67B8u;
    {
        const bool branch_taken_0x1d67b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D67BCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 17912)));
        if (branch_taken_0x1d67b8) {
            ctx->pc = 0x1D6888u;
            goto label_1d6888;
        }
    }
    ctx->pc = 0x1D67C0u;
label_1d67c0:
    // 0x1d67c0: 0x24020003
    ctx->pc = 0x1d67c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d67c4: 0x12220020
    ctx->pc = 0x1D67C4u;
    {
        const bool branch_taken_0x1d67c4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D67C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1d67c4) {
            ctx->pc = 0x1D6848u;
            goto label_1d6848;
        }
    }
    ctx->pc = 0x1D67CCu;
    // 0x1d67cc: 0x1222001e
    ctx->pc = 0x1D67CCu;
    {
        const bool branch_taken_0x1d67cc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        if (branch_taken_0x1d67cc) {
            ctx->pc = 0x1D6848u;
            goto label_1d6848;
        }
    }
    ctx->pc = 0x1D67D4u;
    // 0x1d67d4: 0x24020001
    ctx->pc = 0x1d67d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67d8: 0x12220003
    ctx->pc = 0x1D67D8u;
    {
        const bool branch_taken_0x1d67d8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        if (branch_taken_0x1d67d8) {
            ctx->pc = 0x1D67E8u;
            goto label_1d67e8;
        }
    }
    ctx->pc = 0x1D67E0u;
    // 0x1d67e0: 0x10000027
    ctx->pc = 0x1D67E0u;
    {
        const bool branch_taken_0x1d67e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d67e0) {
            ctx->pc = 0x1D6880u;
            goto label_1d6880;
        }
    }
    ctx->pc = 0x1D67E8u;
label_1d67e8:
    // 0x1d67e8: 0x12000009
    ctx->pc = 0x1D67E8u;
    {
        const bool branch_taken_0x1d67e8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d67e8) {
            ctx->pc = 0x1D6810u;
            goto label_1d6810;
        }
    }
    ctx->pc = 0x1D67F0u;
    // 0x1d67f0: 0xc075d74
    ctx->pc = 0x1D67F0u;
    SET_GPR_U32(ctx, 31, 0x1D67F8u);
    ctx->pc = 0x1D75D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D75D0_0x1d75d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D67F8u; }
    }
    if (ctx->pc != 0x1D67F8u) { return; }
    ctx->pc = 0x1D67F8u;
    // 0x1d67f8: 0x4410005
    ctx->pc = 0x1D67F8u;
    {
        const bool branch_taken_0x1d67f8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1d67f8) {
            ctx->pc = 0x1D6810u;
            goto label_1d6810;
        }
    }
    ctx->pc = 0x1D6800u;
    // 0x1d6800: 0x24020001
    ctx->pc = 0x1d6800u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6804: 0x3c010034
    ctx->pc = 0x1d6804u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d6808: 0x1000001d
    ctx->pc = 0x1D6808u;
    {
        const bool branch_taken_0x1d6808 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D680Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 17912), GPR_U32(ctx, 2));
        if (branch_taken_0x1d6808) {
            ctx->pc = 0x1D6880u;
            goto label_1d6880;
        }
    }
    ctx->pc = 0x1D6810u;
label_1d6810:
    // 0x1d6810: 0xc075db0
    ctx->pc = 0x1D6810u;
    SET_GPR_U32(ctx, 31, 0x1D6818u);
    ctx->pc = 0x1D6814u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 76));
    ctx->pc = 0x1D76C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D76C0_0x1d76c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6818u; }
    }
    if (ctx->pc != 0x1D6818u) { return; }
    ctx->pc = 0x1D6818u;
    // 0x1d6818: 0x24030001
    ctx->pc = 0x1d6818u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d681c: 0x10430006
    ctx->pc = 0x1D681Cu;
    {
        const bool branch_taken_0x1d681c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d681c) {
            ctx->pc = 0x1D6838u;
            goto label_1d6838;
        }
    }
    ctx->pc = 0x1D6824u;
    // 0x1d6824: 0x10400016
    ctx->pc = 0x1D6824u;
    {
        const bool branch_taken_0x1d6824 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d6824) {
            ctx->pc = 0x1D6880u;
            goto label_1d6880;
        }
    }
    ctx->pc = 0x1D682Cu;
    // 0x1d682c: 0x10000014
    ctx->pc = 0x1D682Cu;
    {
        const bool branch_taken_0x1d682c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d682c) {
            ctx->pc = 0x1D6880u;
            goto label_1d6880;
        }
    }
    ctx->pc = 0x1D6834u;
    // 0x1d6834: 0x0
    ctx->pc = 0x1d6834u;
    // NOP
label_1d6838:
    // 0x1d6838: 0x24020002
    ctx->pc = 0x1d6838u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d683c: 0x3c010034
    ctx->pc = 0x1d683cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d6840: 0x1000000f
    ctx->pc = 0x1D6840u;
    {
        const bool branch_taken_0x1d6840 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6844u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 17912), GPR_U32(ctx, 2));
        if (branch_taken_0x1d6840) {
            ctx->pc = 0x1D6880u;
            goto label_1d6880;
        }
    }
    ctx->pc = 0x1D6848u;
label_1d6848:
    // 0x1d6848: 0xc075c14
    ctx->pc = 0x1D6848u;
    SET_GPR_U32(ctx, 31, 0x1D6850u);
    ctx->pc = 0x1D684Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1D7050u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7050_0x1d7050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6850u; }
    }
    if (ctx->pc != 0x1D6850u) { return; }
    ctx->pc = 0x1D6850u;
    // 0x1d6850: 0x4410005
    ctx->pc = 0x1D6850u;
    {
        const bool branch_taken_0x1d6850 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1d6850) {
            ctx->pc = 0x1D6868u;
            goto label_1d6868;
        }
    }
    ctx->pc = 0x1D6858u;
    // 0x1d6858: 0x24020001
    ctx->pc = 0x1d6858u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d685c: 0x3c010034
    ctx->pc = 0x1d685cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d6860: 0x10000007
    ctx->pc = 0x1D6860u;
    {
        const bool branch_taken_0x1d6860 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6864u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 17912), GPR_U32(ctx, 2));
        if (branch_taken_0x1d6860) {
            ctx->pc = 0x1D6880u;
            goto label_1d6880;
        }
    }
    ctx->pc = 0x1D6868u;
label_1d6868:
    // 0x1d6868: 0x87a3003c
    ctx->pc = 0x1d6868u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d686c: 0x24020004
    ctx->pc = 0x1d686cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d6870: 0x10620003
    ctx->pc = 0x1D6870u;
    {
        const bool branch_taken_0x1d6870 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D6874u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1d6870) {
            ctx->pc = 0x1D6880u;
            goto label_1d6880;
        }
    }
    ctx->pc = 0x1D6878u;
    // 0x1d6878: 0x3c010034
    ctx->pc = 0x1d6878u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d687c: 0xac2245f8
    ctx->pc = 0x1d687cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17912), GPR_U32(ctx, 2));
label_1d6880:
    // 0x1d6880: 0x3c010034
    ctx->pc = 0x1d6880u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d6884: 0x8c2245f8
    ctx->pc = 0x1d6884u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 17912)));
label_1d6888:
    // 0x1d6888: 0xdfbf0020
    ctx->pc = 0x1d6888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d688c: 0x7bb10010
    ctx->pc = 0x1d688cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6890: 0x7bb00000
    ctx->pc = 0x1d6890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6894: 0x3e00008
    ctx->pc = 0x1D6894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6898u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6790u: goto label_1d6790;
            case 0x1D67A8u: goto label_1d67a8;
            case 0x1D67C0u: goto label_1d67c0;
            case 0x1D67E8u: goto label_1d67e8;
            case 0x1D6810u: goto label_1d6810;
            case 0x1D6838u: goto label_1d6838;
            case 0x1D6848u: goto label_1d6848;
            case 0x1D6868u: goto label_1d6868;
            case 0x1D6880u: goto label_1d6880;
            case 0x1D6888u: goto label_1d6888;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D689Cu;
    // 0x1d689c: 0x0
    ctx->pc = 0x1d689cu;
    // NOP
}
