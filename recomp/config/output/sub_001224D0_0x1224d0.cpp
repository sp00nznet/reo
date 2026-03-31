#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001224D0
// Address: 0x1224d0 - 0x122690
void sub_001224D0_0x1224d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1224d0u;

    // 0x1224d0: 0x44036000
    ctx->pc = 0x1224d0u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[12]);
    // 0x1224d4: 0x60202d
    ctx->pc = 0x1224d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224d8: 0x3c027fff
    ctx->pc = 0x1224d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x1224dc: 0x3442ffff
    ctx->pc = 0x1224dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1224e0: 0x823024
    ctx->pc = 0x1224e0u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1224e4: 0x61dc2
    ctx->pc = 0x1224e4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 23));
    // 0x1224e8: 0x2465ff81
    ctx->pc = 0x1224e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294967169));
    // 0x1224ec: 0x28a20017
    ctx->pc = 0x1224ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 23));
    // 0x1224f0: 0x1040002b
    ctx->pc = 0x1224F0u;
    {
        const bool branch_taken_0x1224f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1224F4u;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x1224f0) {
            ctx->pc = 0x1225A0u;
            goto label_1225a0;
        }
    }
    ctx->pc = 0x1224F8u;
    // 0x1224f8: 0x4a30013
    ctx->pc = 0x1224F8u;
    {
        const bool branch_taken_0x1224f8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1224f8) {
            ctx->pc = 0x1224FCu;
            SET_GPR_U32(ctx, 2, ((uint32_t)127 << 16));
            ctx->pc = 0x122548u;
            goto label_122548;
        }
    }
    ctx->pc = 0x122500u;
    // 0x122500: 0x3c017149
    ctx->pc = 0x122500u;
    SET_GPR_U32(ctx, 1, ((uint32_t)29001 << 16));
    // 0x122504: 0x3421f2c9
    ctx->pc = 0x122504u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 62153));
    // 0x122508: 0x44810000
    ctx->pc = 0x122508u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x12250c: 0x44800800
    ctx->pc = 0x12250cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x122510: 0x46006000
    ctx->pc = 0x122510u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x122514: 0x46000834
    ctx->pc = 0x122514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x122518: 0x4500001f
    ctx->pc = 0x122518u;
    {
        const bool branch_taken_0x122518 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x122518) {
            ctx->pc = 0x122598u;
            goto label_122598;
        }
    }
    ctx->pc = 0x122520u;
    // 0x122520: 0x4800003
    ctx->pc = 0x122520u;
    {
        const bool branch_taken_0x122520 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x122524u;
        SET_GPR_U32(ctx, 2, ((uint32_t)127 << 16));
        if (branch_taken_0x122520) {
            ctx->pc = 0x122530u;
            goto label_122530;
        }
    }
    ctx->pc = 0x122528u;
    // 0x122528: 0x1000001b
    ctx->pc = 0x122528u;
    {
        const bool branch_taken_0x122528 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12252Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x122528) {
            ctx->pc = 0x122598u;
            goto label_122598;
        }
    }
    ctx->pc = 0x122530u;
label_122530:
    // 0x122530: 0x3442ffff
    ctx->pc = 0x122530u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x122534: 0x46102b
    ctx->pc = 0x122534u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x122538: 0x54400017
    ctx->pc = 0x122538u;
    {
        const bool branch_taken_0x122538 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x122538) {
            ctx->pc = 0x12253Cu;
            SET_GPR_U32(ctx, 4, ((uint32_t)49024 << 16));
            ctx->pc = 0x122598u;
            goto label_122598;
        }
    }
    ctx->pc = 0x122540u;
    // 0x122540: 0x10000015
    ctx->pc = 0x122540u;
    {
        const bool branch_taken_0x122540 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x122540) {
            ctx->pc = 0x122598u;
            goto label_122598;
        }
    }
    ctx->pc = 0x122548u;
label_122548:
    // 0x122548: 0x3442ffff
    ctx->pc = 0x122548u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x12254c: 0xa23007
    ctx->pc = 0x12254cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x122550: 0x861824
    ctx->pc = 0x122550u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x122554: 0x10600012
    ctx->pc = 0x122554u;
    {
        const bool branch_taken_0x122554 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x122558u;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x122554) {
            ctx->pc = 0x1225A0u;
            goto label_1225a0;
        }
    }
    ctx->pc = 0x12255Cu;
    // 0x12255c: 0x3c017149
    ctx->pc = 0x12255cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)29001 << 16));
    // 0x122560: 0x3421f2c9
    ctx->pc = 0x122560u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 62153));
    // 0x122564: 0x44810000
    ctx->pc = 0x122564u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x122568: 0x44800800
    ctx->pc = 0x122568u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x12256c: 0x46006000
    ctx->pc = 0x12256cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x122570: 0x46000834
    ctx->pc = 0x122570u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x122574: 0x45000008
    ctx->pc = 0x122574u;
    {
        const bool branch_taken_0x122574 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x122574) {
            ctx->pc = 0x122598u;
            goto label_122598;
        }
    }
    ctx->pc = 0x12257Cu;
    // 0x12257c: 0x4810005
    ctx->pc = 0x12257Cu;
    {
        const bool branch_taken_0x12257c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x122580u;
        SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        if (branch_taken_0x12257c) {
            ctx->pc = 0x122594u;
            goto label_122594;
        }
    }
    ctx->pc = 0x122584u;
    // 0x122584: 0x3c020080
    ctx->pc = 0x122584u;
    SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
    // 0x122588: 0xa21007
    ctx->pc = 0x122588u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x12258c: 0x822021
    ctx->pc = 0x12258cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x122590: 0x61027
    ctx->pc = 0x122590u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_122594:
    // 0x122594: 0x822024
    ctx->pc = 0x122594u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_122598:
    // 0x122598: 0x44846000
    ctx->pc = 0x122598u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 4);
    // 0x12259c: 0x44840000
    ctx->pc = 0x12259cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
label_1225a0:
    // 0x1225a0: 0x3e00008
    ctx->pc = 0x1225A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122530u: goto label_122530;
            case 0x122548u: goto label_122548;
            case 0x122594u: goto label_122594;
            case 0x122598u: goto label_122598;
            case 0x1225A0u: goto label_1225a0;
            case 0x1225F0u: goto label_1225f0;
            case 0x122620u: goto label_122620;
            case 0x122630u: goto label_122630;
            case 0x122648u: goto label_122648;
            case 0x122660u: goto label_122660;
            case 0x122678u: goto label_122678;
            case 0x122684u: goto label_122684;
            case 0x122688u: goto label_122688;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1225A8u;
    // 0x1225a8: 0x27bdffd0
    ctx->pc = 0x1225a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1225ac: 0x46006006
    ctx->pc = 0x1225acu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x1225b0: 0xffbf0020
    ctx->pc = 0x1225b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1225b4: 0xe7a00010
    ctx->pc = 0x1225b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1225b8: 0x3c027fff
    ctx->pc = 0x1225b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x1225bc: 0x3c033f49
    ctx->pc = 0x1225bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16201 << 16));
    // 0x1225c0: 0x8fa40010
    ctx->pc = 0x1225c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1225c4: 0x3442ffff
    ctx->pc = 0x1225c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1225c8: 0x34630fd8
    ctx->pc = 0x1225c8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4056));
    // 0x1225cc: 0x821024
    ctx->pc = 0x1225ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1225d0: 0x62182a
    ctx->pc = 0x1225d0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1225d4: 0x14600006
    ctx->pc = 0x1225D4u;
    {
        const bool branch_taken_0x1225d4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1225d4) {
            ctx->pc = 0x1225F0u;
            goto label_1225f0;
        }
    }
    ctx->pc = 0x1225DCu;
    // 0x1225dc: 0x44806800
    ctx->pc = 0x1225dcu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x1225e0: 0xc048648
    ctx->pc = 0x1225E0u;
    SET_GPR_U32(ctx, 31, 0x1225E8u);
    ctx->pc = 0x1225E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x121920u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00121920_0x121920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1225E8u; }
    }
    if (ctx->pc != 0x1225E8u) { return; }
    ctx->pc = 0x1225E8u;
    // 0x1225e8: 0x10000027
    ctx->pc = 0x1225E8u;
    {
        const bool branch_taken_0x1225e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1225ECu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1225e8) {
            ctx->pc = 0x122688u;
            goto label_122688;
        }
    }
    ctx->pc = 0x1225F0u;
label_1225f0:
    // 0x1225f0: 0xc0482ba
    ctx->pc = 0x1225F0u;
    SET_GPR_U32(ctx, 31, 0x1225F8u);
    ctx->pc = 0x1225F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x120AE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00120AE8_0x120ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1225F8u; }
    }
    if (ctx->pc != 0x1225F8u) { return; }
    ctx->pc = 0x1225F8u;
    // 0x1225f8: 0x24030001
    ctx->pc = 0x1225f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1225fc: 0x30440003
    ctx->pc = 0x1225fcu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 3));
    // 0x122600: 0x10830011
    ctx->pc = 0x122600u;
    {
        const bool branch_taken_0x122600 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x122604u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 2));
        if (branch_taken_0x122600) {
            ctx->pc = 0x122648u;
            goto label_122648;
        }
    }
    ctx->pc = 0x122608u;
    // 0x122608: 0x50400005
    ctx->pc = 0x122608u;
    {
        const bool branch_taken_0x122608 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x122608) {
            ctx->pc = 0x12260Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x122620u;
            goto label_122620;
        }
    }
    ctx->pc = 0x122610u;
    // 0x122610: 0x10800007
    ctx->pc = 0x122610u;
    {
        const bool branch_taken_0x122610 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x122614u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x122610) {
            ctx->pc = 0x122630u;
            goto label_122630;
        }
    }
    ctx->pc = 0x122618u;
    // 0x122618: 0x10000017
    ctx->pc = 0x122618u;
    {
        const bool branch_taken_0x122618 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x122618) {
            ctx->pc = 0x122678u;
            goto label_122678;
        }
    }
    ctx->pc = 0x122620u;
label_122620:
    // 0x122620: 0x1082000f
    ctx->pc = 0x122620u;
    {
        const bool branch_taken_0x122620 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x122624u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x122620) {
            ctx->pc = 0x122660u;
            goto label_122660;
        }
    }
    ctx->pc = 0x122628u;
    // 0x122628: 0x10000013
    ctx->pc = 0x122628u;
    {
        const bool branch_taken_0x122628 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x122628) {
            ctx->pc = 0x122678u;
            goto label_122678;
        }
    }
    ctx->pc = 0x122630u;
label_122630:
    // 0x122630: 0x24040001
    ctx->pc = 0x122630u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x122634: 0xc048648
    ctx->pc = 0x122634u;
    SET_GPR_U32(ctx, 31, 0x12263Cu);
    ctx->pc = 0x122638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x121920u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00121920_0x121920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12263Cu; }
    }
    if (ctx->pc != 0x12263Cu) { return; }
    ctx->pc = 0x12263Cu;
    // 0x12263c: 0x10000012
    ctx->pc = 0x12263Cu;
    {
        const bool branch_taken_0x12263c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122640u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x12263c) {
            ctx->pc = 0x122688u;
            goto label_122688;
        }
    }
    ctx->pc = 0x122644u;
    // 0x122644: 0x0
    ctx->pc = 0x122644u;
    // NOP
label_122648:
    // 0x122648: 0xc7ac0000
    ctx->pc = 0x122648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12264c: 0xc0483da
    ctx->pc = 0x12264Cu;
    SET_GPR_U32(ctx, 31, 0x122654u);
    ctx->pc = 0x122650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x120F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00120F68_0x120f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122654u; }
    }
    if (ctx->pc != 0x122654u) { return; }
    ctx->pc = 0x122654u;
    // 0x122654: 0x1000000c
    ctx->pc = 0x122654u;
    {
        const bool branch_taken_0x122654 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122658u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x122654) {
            ctx->pc = 0x122688u;
            goto label_122688;
        }
    }
    ctx->pc = 0x12265Cu;
    // 0x12265c: 0x0
    ctx->pc = 0x12265cu;
    // NOP
label_122660:
    // 0x122660: 0x24040001
    ctx->pc = 0x122660u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x122664: 0xc048648
    ctx->pc = 0x122664u;
    SET_GPR_U32(ctx, 31, 0x12266Cu);
    ctx->pc = 0x122668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x121920u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00121920_0x121920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12266Cu; }
    }
    if (ctx->pc != 0x12266Cu) { return; }
    ctx->pc = 0x12266Cu;
    // 0x12266c: 0x10000005
    ctx->pc = 0x12266Cu;
    {
        const bool branch_taken_0x12266c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122670u;
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        if (branch_taken_0x12266c) {
            ctx->pc = 0x122684u;
            goto label_122684;
        }
    }
    ctx->pc = 0x122674u;
    // 0x122674: 0x0
    ctx->pc = 0x122674u;
    // NOP
label_122678:
    // 0x122678: 0xc0483da
    ctx->pc = 0x122678u;
    SET_GPR_U32(ctx, 31, 0x122680u);
    ctx->pc = 0x12267Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x120F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00120F68_0x120f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122680u; }
    }
    if (ctx->pc != 0x122680u) { return; }
    ctx->pc = 0x122680u;
    // 0x122680: 0x46000007
    ctx->pc = 0x122680u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_122684:
    // 0x122684: 0xdfbf0020
    ctx->pc = 0x122684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_122688:
    // 0x122688: 0x3e00008
    ctx->pc = 0x122688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12268Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122530u: goto label_122530;
            case 0x122548u: goto label_122548;
            case 0x122594u: goto label_122594;
            case 0x122598u: goto label_122598;
            case 0x1225A0u: goto label_1225a0;
            case 0x1225F0u: goto label_1225f0;
            case 0x122620u: goto label_122620;
            case 0x122630u: goto label_122630;
            case 0x122648u: goto label_122648;
            case 0x122660u: goto label_122660;
            case 0x122678u: goto label_122678;
            case 0x122684u: goto label_122684;
            case 0x122688u: goto label_122688;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122690u;
}
