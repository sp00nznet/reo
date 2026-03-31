#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00111770
// Address: 0x111770 - 0x111828
void sub_00111770_0x111770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x111770u;

    // 0x111770: 0x8c820000
    ctx->pc = 0x111770u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x111774: 0x382d
    ctx->pc = 0x111774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111778: 0x8c85000c
    ctx->pc = 0x111778u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11177c: 0x38420002
    ctx->pc = 0x11177cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 2));
    // 0x111780: 0x10400010
    ctx->pc = 0x111780u;
    {
        const bool branch_taken_0x111780 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x111784u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        if (branch_taken_0x111780) {
            ctx->pc = 0x1117C4u;
            goto label_1117c4;
        }
    }
    ctx->pc = 0x111788u;
    // 0x111788: 0x10a00013
    ctx->pc = 0x111788u;
    {
        const bool branch_taken_0x111788 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x11178Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)127 << 16));
        if (branch_taken_0x111788) {
            ctx->pc = 0x1117D8u;
            goto label_1117d8;
        }
    }
    ctx->pc = 0x111790u;
    // 0x111790: 0x8c840008
    ctx->pc = 0x111790u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x111794: 0x2882ff82
    ctx->pc = 0x111794u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4294967170));
    // 0x111798: 0x5440000e
    ctx->pc = 0x111798u;
    {
        const bool branch_taken_0x111798 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x111798) {
            ctx->pc = 0x11179Cu;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x1117D4u;
            goto label_1117d4;
        }
    }
    ctx->pc = 0x1117A0u;
    // 0x1117a0: 0x28820081
    ctx->pc = 0x1117a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 129));
    // 0x1117a4: 0x50400007
    ctx->pc = 0x1117A4u;
    {
        const bool branch_taken_0x1117a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1117a4) {
            ctx->pc = 0x1117A8u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 255));
            ctx->pc = 0x1117C4u;
            goto label_1117c4;
        }
    }
    ctx->pc = 0x1117ACu;
    // 0x1117ac: 0x24020080
    ctx->pc = 0x1117acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x1117b0: 0x14820007
    ctx->pc = 0x1117B0u;
    {
        const bool branch_taken_0x1117b0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x1117B4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 127));
        if (branch_taken_0x1117b0) {
            ctx->pc = 0x1117D0u;
            goto label_1117d0;
        }
    }
    ctx->pc = 0x1117B8u;
    // 0x1117b8: 0x4a30006
    ctx->pc = 0x1117B8u;
    {
        const bool branch_taken_0x1117b8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1117b8) {
            ctx->pc = 0x1117BCu;
            SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 7));
            ctx->pc = 0x1117D4u;
            goto label_1117d4;
        }
    }
    ctx->pc = 0x1117C0u;
    // 0x1117c0: 0x240700ff
    ctx->pc = 0x1117c0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 255));
label_1117c4:
    // 0x1117c4: 0x10000003
    ctx->pc = 0x1117C4u;
    {
        const bool branch_taken_0x1117c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1117C8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1117c4) {
            ctx->pc = 0x1117D4u;
            goto label_1117d4;
        }
    }
    ctx->pc = 0x1117CCu;
    // 0x1117cc: 0x0
    ctx->pc = 0x1117ccu;
    // NOP
label_1117d0:
    // 0x1117d0: 0x529c2
    ctx->pc = 0x1117d0u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 7));
label_1117d4:
    // 0x1117d4: 0x3c02007f
    ctx->pc = 0x1117d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)127 << 16));
label_1117d8:
    // 0x1117d8: 0x3c03ff80
    ctx->pc = 0x1117d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65408 << 16));
    // 0x1117dc: 0x3442ffff
    ctx->pc = 0x1117dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1117e0: 0xc33024
    ctx->pc = 0x1117e0u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1117e4: 0xa21024
    ctx->pc = 0x1117e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1117e8: 0x3c03807f
    ctx->pc = 0x1117e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32895 << 16));
    // 0x1117ec: 0xc23025
    ctx->pc = 0x1117ecu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1117f0: 0x3c027fff
    ctx->pc = 0x1117f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x1117f4: 0x3463ffff
    ctx->pc = 0x1117f4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x1117f8: 0x30e400ff
    ctx->pc = 0x1117f8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 7), 255));
    // 0x1117fc: 0xc33024
    ctx->pc = 0x1117fcu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x111800: 0x81fc0
    ctx->pc = 0x111800u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 31));
    // 0x111804: 0x425c0
    ctx->pc = 0x111804u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 23));
    // 0x111808: 0x3442ffff
    ctx->pc = 0x111808u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x11180c: 0xc43025
    ctx->pc = 0x11180cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x111810: 0xc23024
    ctx->pc = 0x111810u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x111814: 0xc33025
    ctx->pc = 0x111814u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x111818: 0x44860000
    ctx->pc = 0x111818u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
    // 0x11181c: 0x3e00008
    ctx->pc = 0x11181Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1117C4u: goto label_1117c4;
            case 0x1117D0u: goto label_1117d0;
            case 0x1117D4u: goto label_1117d4;
            case 0x1117D8u: goto label_1117d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x111824u;
    // 0x111824: 0x0
    ctx->pc = 0x111824u;
    // NOP
}
