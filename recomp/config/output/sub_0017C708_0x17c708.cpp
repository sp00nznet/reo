#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017C708
// Address: 0x17c708 - 0x17c940
void sub_0017C708_0x17c708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17c708u;

    // 0x17c708: 0x27bdfff0
    ctx->pc = 0x17c708u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c70c: 0x24030064
    ctx->pc = 0x17c70cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 100));
    // 0x17c710: 0xffb00000
    ctx->pc = 0x17c710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c714: 0x24100001
    ctx->pc = 0x17c714u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c718: 0xffbf0008
    ctx->pc = 0x17c718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17c71c: 0x8c860038
    ctx->pc = 0x17c71cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x17c720: 0x10c30023
    ctx->pc = 0x17C720u;
    {
        const bool branch_taken_0x17c720 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x17C724u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17c720) {
            ctx->pc = 0x17C7B0u;
            goto label_17c7b0;
        }
    }
    ctx->pc = 0x17C728u;
    // 0x17c728: 0x14c50021
    ctx->pc = 0x17C728u;
    {
        const bool branch_taken_0x17c728 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 5));
        ctx->pc = 0x17C72Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17c728) {
            ctx->pc = 0x17C7B0u;
            goto label_17c7b0;
        }
    }
    ctx->pc = 0x17C730u;
    // 0x17c730: 0x2ca2000e
    ctx->pc = 0x17c730u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 14));
    // 0x17c734: 0x10400010
    ctx->pc = 0x17C734u;
    {
        const bool branch_taken_0x17c734 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C738u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 21));
        if (branch_taken_0x17c734) {
            ctx->pc = 0x17C778u;
            goto label_17c778;
        }
    }
    ctx->pc = 0x17C73Cu;
    // 0x17c73c: 0x2ca2000b
    ctx->pc = 0x17c73cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 11));
    // 0x17c740: 0x5040001b
    ctx->pc = 0x17C740u;
    {
        const bool branch_taken_0x17c740 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17c740) {
            ctx->pc = 0x17C744u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x17C7B0u;
            goto label_17c7b0;
        }
    }
    ctx->pc = 0x17C748u;
    // 0x17c748: 0x50b00018
    ctx->pc = 0x17C748u;
    {
        const bool branch_taken_0x17c748 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 16));
        if (branch_taken_0x17c748) {
            ctx->pc = 0x17C74Cu;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x17C7ACu;
            goto label_17c7ac;
        }
    }
    ctx->pc = 0x17C750u;
    // 0x17c750: 0x10a00017
    ctx->pc = 0x17C750u;
    {
        const bool branch_taken_0x17c750 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C754u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17c750) {
            ctx->pc = 0x17C7B0u;
            goto label_17c7b0;
        }
    }
    ctx->pc = 0x17C758u;
    // 0x17c758: 0x24020002
    ctx->pc = 0x17c758u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x17c75c: 0x10a2000e
    ctx->pc = 0x17C75Cu;
    {
        const bool branch_taken_0x17c75c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x17C760u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x17c75c) {
            ctx->pc = 0x17C798u;
            goto label_17c798;
        }
    }
    ctx->pc = 0x17C764u;
    // 0x17c764: 0x10a20010
    ctx->pc = 0x17C764u;
    {
        const bool branch_taken_0x17c764 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x17C768u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17c764) {
            ctx->pc = 0x17C7A8u;
            goto label_17c7a8;
        }
    }
    ctx->pc = 0x17C76Cu;
    // 0x17c76c: 0x10000011
    ctx->pc = 0x17C76Cu;
    {
        const bool branch_taken_0x17c76c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C770u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x17c76c) {
            ctx->pc = 0x17C7B4u;
            goto label_17c7b4;
        }
    }
    ctx->pc = 0x17C774u;
    // 0x17c774: 0x0
    ctx->pc = 0x17c774u;
    // NOP
label_17c778:
    // 0x17c778: 0x1440000d
    ctx->pc = 0x17C778u;
    {
        const bool branch_taken_0x17c778 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17C77Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17c778) {
            ctx->pc = 0x17C7B0u;
            goto label_17c7b0;
        }
    }
    ctx->pc = 0x17C780u;
    // 0x17c780: 0x2ca20017
    ctx->pc = 0x17c780u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 23));
    // 0x17c784: 0x54400009
    ctx->pc = 0x17C784u;
    {
        const bool branch_taken_0x17c784 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17c784) {
            ctx->pc = 0x17C788u;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x17C7ACu;
            goto label_17c7ac;
        }
    }
    ctx->pc = 0x17C78Cu;
    // 0x17c78c: 0x10000008
    ctx->pc = 0x17C78Cu;
    {
        const bool branch_taken_0x17c78c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C790u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17c78c) {
            ctx->pc = 0x17C7B0u;
            goto label_17c7b0;
        }
    }
    ctx->pc = 0x17C794u;
    // 0x17c794: 0x0
    ctx->pc = 0x17c794u;
    // NOP
label_17c798:
    // 0x17c798: 0xc05e9f4
    ctx->pc = 0x17C798u;
    SET_GPR_U32(ctx, 31, 0x17C7A0u);
    ctx->pc = 0x17C79Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    ctx->pc = 0x17A7D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A7D0_0x17a7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C7A0u; }
    }
    if (ctx->pc != 0x17C7A0u) { return; }
    ctx->pc = 0x17C7A0u;
    // 0x17c7a0: 0x10500003
    ctx->pc = 0x17C7A0u;
    {
        const bool branch_taken_0x17c7a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        ctx->pc = 0x17C7A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17c7a0) {
            ctx->pc = 0x17C7B0u;
            goto label_17c7b0;
        }
    }
    ctx->pc = 0x17C7A8u;
label_17c7a8:
    // 0x17c7a8: 0x802d
    ctx->pc = 0x17c7a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c7ac:
    // 0x17c7ac: 0x200102d
    ctx->pc = 0x17c7acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17c7b0:
    // 0x17c7b0: 0xdfb00000
    ctx->pc = 0x17c7b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c7b4:
    // 0x17c7b4: 0xdfbf0008
    ctx->pc = 0x17c7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c7b8: 0x3e00008
    ctx->pc = 0x17C7B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C7BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C778u: goto label_17c778;
            case 0x17C798u: goto label_17c798;
            case 0x17C7A8u: goto label_17c7a8;
            case 0x17C7ACu: goto label_17c7ac;
            case 0x17C7B0u: goto label_17c7b0;
            case 0x17C7B4u: goto label_17c7b4;
            case 0x17C818u: goto label_17c818;
            case 0x17C820u: goto label_17c820;
            case 0x17C858u: goto label_17c858;
            case 0x17C894u: goto label_17c894;
            case 0x17C8A8u: goto label_17c8a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17C7C0u;
    // 0x17c7c0: 0x27bdfff0
    ctx->pc = 0x17c7c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c7c4: 0xffbf0000
    ctx->pc = 0x17c7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c7c8: 0x8c86003c
    ctx->pc = 0x17c7c8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x17c7cc: 0x8ca5004c
    ctx->pc = 0x17c7ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x17c7d0: 0x8c840024
    ctx->pc = 0x17c7d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x17c7d4: 0xdfbf0000
    ctx->pc = 0x17c7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c7d8: 0x805f798
    ctx->pc = 0x17C7D8u;
    ctx->pc = 0x17C7DCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17DE60u;
    entry_17de60_0x17deb0(rdram, ctx, runtime); return;
    ctx->pc = 0x17C7E0u;
    // 0x17c7e0: 0x27bdfff0
    ctx->pc = 0x17c7e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c7e4: 0xffbf0000
    ctx->pc = 0x17c7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c7e8: 0x8c86003c
    ctx->pc = 0x17c7e8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x17c7ec: 0x8ca5004c
    ctx->pc = 0x17c7ecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x17c7f0: 0x8c840024
    ctx->pc = 0x17c7f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x17c7f4: 0xdfbf0000
    ctx->pc = 0x17c7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c7f8: 0x805f834
    ctx->pc = 0x17C7F8u;
    ctx->pc = 0x17C7FCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17E0D0u;
    entry_17e0d0_0x17e120(rdram, ctx, runtime); return;
    ctx->pc = 0x17C800u;
    // 0x17c800: 0x27bdfff0
    ctx->pc = 0x17c800u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c804: 0xffbf0000
    ctx->pc = 0x17c804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c808: 0x8c84003c
    ctx->pc = 0x17c808u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x17c80c: 0xdfbf0000
    ctx->pc = 0x17c80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c810: 0x805f206
    ctx->pc = 0x17C810u;
    ctx->pc = 0x17C814u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17C818u;
    goto label_17c818;
    ctx->pc = 0x17C818u;
label_17c818:
    // 0x17c818: 0x2405000f
    ctx->pc = 0x17c818u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x17c81c: 0x2482000f
    ctx->pc = 0x17c81cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 15));
label_17c820:
    // 0x17c820: 0x24a5ffff
    ctx->pc = 0x17c820u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x17c824: 0xa0400000
    ctx->pc = 0x17c824u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c828: 0x0
    ctx->pc = 0x17c828u;
    // NOP
    // 0x17c82c: 0x0
    ctx->pc = 0x17c82cu;
    // NOP
    // 0x17c830: 0x0
    ctx->pc = 0x17c830u;
    // NOP
    // 0x17c834: 0x4a1fffa
    ctx->pc = 0x17C834u;
    {
        const bool branch_taken_0x17c834 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x17C838u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x17c834) {
            ctx->pc = 0x17C820u;
            goto label_17c820;
        }
    }
    ctx->pc = 0x17C83Cu;
    // 0x17c83c: 0x3c013f14
    ctx->pc = 0x17c83cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16148 << 16));
    // 0x17c840: 0x3421fdf3
    ctx->pc = 0x17c840u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65011));
    // 0x17c844: 0x44811000
    ctx->pc = 0x17c844u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x17c848: 0x24050010
    ctx->pc = 0x17c848u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x17c84c: 0x3c014f00
    ctx->pc = 0x17c84cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)20224 << 16));
    // 0x17c850: 0x44810800
    ctx->pc = 0x17c850u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x17c854: 0x3c078000
    ctx->pc = 0x17c854u;
    SET_GPR_U32(ctx, 7, ((uint32_t)32768 << 16));
label_17c858:
    // 0x17c858: 0x24a2fff0
    ctx->pc = 0x17c858u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x17c85c: 0x853021
    ctx->pc = 0x17c85cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17c860: 0x44820000
    ctx->pc = 0x17c860u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x17c864: 0x46800020
    ctx->pc = 0x17c864u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x17c868: 0x24a50001
    ctx->pc = 0x17c868u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x17c86c: 0x46020002
    ctx->pc = 0x17c86cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x17c870: 0x46000836
    ctx->pc = 0x17c870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c874: 0x460000e4
    ctx->pc = 0x17c874u;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[0]);
    // 0x17c878: 0x44021800
    ctx->pc = 0x17c878u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[3]);
    // 0x17c87c: 0x45000005
    ctx->pc = 0x17C87Cu;
    {
        const bool branch_taken_0x17c87c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C880u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 236));
        if (branch_taken_0x17c87c) {
            ctx->pc = 0x17C894u;
            goto label_17c894;
        }
    }
    ctx->pc = 0x17C884u;
    // 0x17c884: 0x46010001
    ctx->pc = 0x17c884u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x17c888: 0x460000e4
    ctx->pc = 0x17c888u;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[0]);
    // 0x17c88c: 0x44021800
    ctx->pc = 0x17c88cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[3]);
    // 0x17c890: 0x471025
    ctx->pc = 0x17c890u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_17c894:
    // 0x17c894: 0x1460fff0
    ctx->pc = 0x17C894u;
    {
        const bool branch_taken_0x17c894 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17C898u;
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x17c894) {
            ctx->pc = 0x17C858u;
            goto label_17c858;
        }
    }
    ctx->pc = 0x17C89Cu;
    // 0x17c89c: 0x240500ec
    ctx->pc = 0x17c89cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 236));
    // 0x17c8a0: 0x2406ff80
    ctx->pc = 0x17c8a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x17c8a4: 0x0
    ctx->pc = 0x17c8a4u;
    // NOP
label_17c8a8:
    // 0x17c8a8: 0x851821
    ctx->pc = 0x17c8a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17c8ac: 0x24a50001
    ctx->pc = 0x17c8acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x17c8b0: 0x28a20100
    ctx->pc = 0x17c8b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 256));
    // 0x17c8b4: 0x0
    ctx->pc = 0x17c8b4u;
    // NOP
    // 0x17c8b8: 0x0
    ctx->pc = 0x17c8b8u;
    // NOP
    // 0x17c8bc: 0x1440fffa
    ctx->pc = 0x17C8BCu;
    {
        const bool branch_taken_0x17c8bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17C8C0u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        if (branch_taken_0x17c8bc) {
            ctx->pc = 0x17C8A8u;
            goto label_17c8a8;
        }
    }
    ctx->pc = 0x17C8C4u;
    // 0x17c8c4: 0x3e00008
    ctx->pc = 0x17C8C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C778u: goto label_17c778;
            case 0x17C798u: goto label_17c798;
            case 0x17C7A8u: goto label_17c7a8;
            case 0x17C7ACu: goto label_17c7ac;
            case 0x17C7B0u: goto label_17c7b0;
            case 0x17C7B4u: goto label_17c7b4;
            case 0x17C818u: goto label_17c818;
            case 0x17C820u: goto label_17c820;
            case 0x17C858u: goto label_17c858;
            case 0x17C894u: goto label_17c894;
            case 0x17C8A8u: goto label_17c8a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17C8CCu;
    // 0x17c8cc: 0x0
    ctx->pc = 0x17c8ccu;
    // NOP
    // 0x17c8d0: 0x27bdfff0
    ctx->pc = 0x17c8d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c8d4: 0xffbf0000
    ctx->pc = 0x17c8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c8d8: 0x8c86003c
    ctx->pc = 0x17c8d8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x17c8dc: 0x8ca5004c
    ctx->pc = 0x17c8dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x17c8e0: 0x8c840030
    ctx->pc = 0x17c8e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x17c8e4: 0xdfbf0000
    ctx->pc = 0x17c8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c8e8: 0x805e9de
    ctx->pc = 0x17C8E8u;
    ctx->pc = 0x17C8ECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17A778u;
    entry_17a778_0x17a7b8(rdram, ctx, runtime); return;
    ctx->pc = 0x17C8F0u;
    // 0x17c8f0: 0x27bdfff0
    ctx->pc = 0x17c8f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c8f4: 0xffbf0000
    ctx->pc = 0x17c8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c8f8: 0x8c86003c
    ctx->pc = 0x17c8f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x17c8fc: 0x8ca5004c
    ctx->pc = 0x17c8fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x17c900: 0x8c840030
    ctx->pc = 0x17c900u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x17c904: 0xdfbf0000
    ctx->pc = 0x17c904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c908: 0x805e9ee
    ctx->pc = 0x17C908u;
    ctx->pc = 0x17C90Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17A7B8u;
    entry_17a7b8_0x17a7d0(rdram, ctx, runtime); return;
    ctx->pc = 0x17C910u;
    // 0x17c910: 0x27bdfff0
    ctx->pc = 0x17c910u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c914: 0xffbf0000
    ctx->pc = 0x17c914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c918: 0x8c84003c
    ctx->pc = 0x17c918u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x17c91c: 0xdfbf0000
    ctx->pc = 0x17c91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c920: 0x8053fa4
    ctx->pc = 0x17C920u;
    ctx->pc = 0x17C924u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x14FE90u;
    entry_14fe90_0x14ff48(rdram, ctx, runtime); return;
    ctx->pc = 0x17C928u;
    // 0x17c928: 0x27bdfff0
    ctx->pc = 0x17c928u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c92c: 0xffbf0000
    ctx->pc = 0x17c92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c930: 0x8c84003c
    ctx->pc = 0x17c930u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x17c934: 0xdfbf0000
    ctx->pc = 0x17c934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c938: 0x8053fa2
    ctx->pc = 0x17C938u;
    ctx->pc = 0x17C93Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x14FE88u;
    entry_14fe88_0x14fe90(rdram, ctx, runtime); return;
    ctx->pc = 0x17C940u;
}
