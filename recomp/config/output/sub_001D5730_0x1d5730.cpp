#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D5730
// Address: 0x1d5730 - 0x1d5830
void sub_001D5730_0x1d5730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d5730u;

    // 0x1d5730: 0x27bdffb0
    ctx->pc = 0x1d5730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d5734: 0x3c020023
    ctx->pc = 0x1d5734u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1d5738: 0xffb10020
    ctx->pc = 0x1d5738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1d573c: 0xa0302d
    ctx->pc = 0x1d573cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5740: 0x80882d
    ctx->pc = 0x1d5740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5744: 0xffbf0040
    ctx->pc = 0x1d5744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d5748: 0x8c446998
    ctx->pc = 0x1d5748u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 27032)));
    // 0x1d574c: 0xffb20030
    ctx->pc = 0x1d574cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1d5750: 0x2402ffff
    ctx->pc = 0x1d5750u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5754: 0x1082002f
    ctx->pc = 0x1D5754u;
    {
        const bool branch_taken_0x1d5754 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D5758u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        if (branch_taken_0x1d5754) {
            ctx->pc = 0x1D5814u;
            goto label_1d5814;
        }
    }
    ctx->pc = 0x1D575Cu;
    // 0x1d575c: 0x3c030034
    ctx->pc = 0x1d575cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x1d5760: 0x8c622840
    ctx->pc = 0x1d5760u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 10304)));
    // 0x1d5764: 0x222102a
    ctx->pc = 0x1d5764u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x1d5768: 0x14400003
    ctx->pc = 0x1D5768u;
    {
        const bool branch_taken_0x1d5768 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D576Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 10304));
        if (branch_taken_0x1d5768) {
            ctx->pc = 0x1D5778u;
            goto label_1d5778;
        }
    }
    ctx->pc = 0x1D5770u;
    // 0x1d5770: 0x10000028
    ctx->pc = 0x1D5770u;
    {
        const bool branch_taken_0x1d5770 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5774u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x1d5770) {
            ctx->pc = 0x1D5814u;
            goto label_1d5814;
        }
    }
    ctx->pc = 0x1D5778u;
label_1d5778:
    // 0x1d5778: 0x2cc20003
    ctx->pc = 0x1d5778u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 3));
    // 0x1d577c: 0x14400003
    ctx->pc = 0x1D577Cu;
    {
        const bool branch_taken_0x1d577c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D5780u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 56));
        if (branch_taken_0x1d577c) {
            ctx->pc = 0x1D578Cu;
            goto label_1d578c;
        }
    }
    ctx->pc = 0x1D5784u;
    // 0x1d5784: 0x10000023
    ctx->pc = 0x1D5784u;
    {
        const bool branch_taken_0x1d5784 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5788u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967284));
        if (branch_taken_0x1d5784) {
            ctx->pc = 0x1D5814u;
            goto label_1d5814;
        }
    }
    ctx->pc = 0x1D578Cu;
label_1d578c:
    // 0x1d578c: 0x8e450004
    ctx->pc = 0x1d578cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d5790: 0x2221018
    ctx->pc = 0x1d5790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1d5794: 0x3c030034
    ctx->pc = 0x1d5794u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x1d5798: 0x24702940
    ctx->pc = 0x1d5798u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 10560));
    // 0x1d579c: 0x451021
    ctx->pc = 0x1d579cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d57a0: 0xac460000
    ctx->pc = 0x1d57a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1d57a4: 0xa0712940
    ctx->pc = 0x1d57a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10560), (uint8_t)GPR_U32(ctx, 17));
    // 0x1d57a8: 0xc045198
    ctx->pc = 0x1D57A8u;
    SET_GPR_U32(ctx, 31, 0x1D57B0u);
    ctx->pc = 0x1D57ACu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 6));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D57B0u; }
    }
    if (ctx->pc != 0x1D57B0u) { return; }
    ctx->pc = 0x1D57B0u;
    // 0x1d57b0: 0x3c040034
    ctx->pc = 0x1d57b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1d57b4: 0x3c090034
    ctx->pc = 0x1d57b4u;
    SET_GPR_U32(ctx, 9, ((uint32_t)52 << 16));
    // 0x1d57b8: 0x3c0b001d
    ctx->pc = 0x1d57b8u;
    SET_GPR_U32(ctx, 11, ((uint32_t)29 << 16));
    // 0x1d57bc: 0x248428e0
    ctx->pc = 0x1d57bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10464));
    // 0x1d57c0: 0x200382d
    ctx->pc = 0x1d57c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d57c4: 0x25292980
    ctx->pc = 0x1d57c4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 10624));
    // 0x1d57c8: 0x256b59b8
    ctx->pc = 0x1d57c8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 22968));
    // 0x1d57cc: 0xafa00000
    ctx->pc = 0x1d57ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d57d0: 0x24050005
    ctx->pc = 0x1d57d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d57d4: 0x24060001
    ctx->pc = 0x1d57d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d57d8: 0x24080010
    ctx->pc = 0x1d57d8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d57dc: 0xc045e7a
    ctx->pc = 0x1D57DCu;
    SET_GPR_U32(ctx, 31, 0x1D57E4u);
    ctx->pc = 0x1D57E0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D57E4u; }
    }
    if (ctx->pc != 0x1D57E4u) { return; }
    ctx->pc = 0x1D57E4u;
    // 0x1d57e4: 0x10400006
    ctx->pc = 0x1D57E4u;
    {
        const bool branch_taken_0x1d57e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D57E8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
        if (branch_taken_0x1d57e4) {
            ctx->pc = 0x1D5800u;
            goto label_1d5800;
        }
    }
    ctx->pc = 0x1D57ECu;
    // 0x1d57ec: 0x40282d
    ctx->pc = 0x1d57ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d57f0: 0xc045a12
    ctx->pc = 0x1D57F0u;
    SET_GPR_U32(ctx, 31, 0x1D57F8u);
    ctx->pc = 0x1D57F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28432));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D57F8u; }
    }
    if (ctx->pc != 0x1D57F8u) { return; }
    ctx->pc = 0x1D57F8u;
    // 0x1d57f8: 0x10000006
    ctx->pc = 0x1D57F8u;
    {
        const bool branch_taken_0x1d57f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D57FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x1d57f8) {
            ctx->pc = 0x1D5814u;
            goto label_1d5814;
        }
    }
    ctx->pc = 0x1D5800u;
label_1d5800:
    // 0x1d5800: 0x24020005
    ctx->pc = 0x1d5800u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d5804: 0xae510094
    ctx->pc = 0x1d5804u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 17));
    // 0x1d5808: 0xae420090
    ctx->pc = 0x1d5808u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
    // 0x1d580c: 0xae400098
    ctx->pc = 0x1d580cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
    // 0x1d5810: 0x102d
    ctx->pc = 0x1d5810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5814:
    // 0x1d5814: 0xdfbf0040
    ctx->pc = 0x1d5814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5818: 0xdfb20030
    ctx->pc = 0x1d5818u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d581c: 0xdfb10020
    ctx->pc = 0x1d581cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5820: 0xdfb00010
    ctx->pc = 0x1d5820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5824: 0x3e00008
    ctx->pc = 0x1D5824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5828u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5778u: goto label_1d5778;
            case 0x1D578Cu: goto label_1d578c;
            case 0x1D5800u: goto label_1d5800;
            case 0x1D5814u: goto label_1d5814;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D582Cu;
    // 0x1d582c: 0x0
    ctx->pc = 0x1d582cu;
    // NOP
}
