#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B56A0
// Address: 0x1b56a0 - 0x1b5a50
void sub_001B56A0_0x1b56a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b56a0u;

    // 0x1b56a0: 0x27bdff60
    ctx->pc = 0x1b56a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b56a4: 0x3c010032
    ctx->pc = 0x1b56a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b56a8: 0xffbf0090
    ctx->pc = 0x1b56a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1b56ac: 0x7fbe0080
    ctx->pc = 0x1b56acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1b56b0: 0x7fb70070
    ctx->pc = 0x1b56b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1b56b4: 0x7fb60060
    ctx->pc = 0x1b56b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b56b8: 0x7fb50050
    ctx->pc = 0x1b56b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b56bc: 0x7fb40040
    ctx->pc = 0x1b56bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b56c0: 0x3c15002c
    ctx->pc = 0x1b56c0u;
    SET_GPR_U32(ctx, 21, ((uint32_t)44 << 16));
    // 0x1b56c4: 0x7fb30030
    ctx->pc = 0x1b56c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b56c8: 0x26b5aaf0
    ctx->pc = 0x1b56c8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294945520));
    // 0x1b56cc: 0x7fb20020
    ctx->pc = 0x1b56ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b56d0: 0x7fb10010
    ctx->pc = 0x1b56d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b56d4: 0x7fb00000
    ctx->pc = 0x1b56d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b56d8: 0x902343d6
    ctx->pc = 0x1b56d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17366)));
    // 0x1b56dc: 0x14600005
    ctx->pc = 0x1B56DCu;
    {
        const bool branch_taken_0x1b56dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B56E0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b56dc) {
            ctx->pc = 0x1B56F4u;
            goto label_1b56f4;
        }
    }
    ctx->pc = 0x1B56E4u;
    // 0x1b56e4: 0x3c010032
    ctx->pc = 0x1b56e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b56e8: 0x902343ea
    ctx->pc = 0x1b56e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17386)));
    // 0x1b56ec: 0x1060007f
    ctx->pc = 0x1B56ECu;
    {
        const bool branch_taken_0x1b56ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b56ec) {
            ctx->pc = 0x1B58ECu;
            goto label_1b58ec;
        }
    }
    ctx->pc = 0x1B56F4u;
label_1b56f4:
    // 0x1b56f4: 0x8ea40008
    ctx->pc = 0x1b56f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1b56f8: 0x24030002
    ctx->pc = 0x1b56f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b56fc: 0x14830005
    ctx->pc = 0x1B56FCu;
    {
        const bool branch_taken_0x1b56fc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1B5700u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b56fc) {
            ctx->pc = 0x1B5714u;
            goto label_1b5714;
        }
    }
    ctx->pc = 0x1B5704u;
    // 0x1b5704: 0xc06da90
    ctx->pc = 0x1B5704u;
    SET_GPR_U32(ctx, 31, 0x1B570Cu);
    ctx->pc = 0x1B5708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B6A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6A40_0x1b6a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B570Cu; }
    }
    if (ctx->pc != 0x1B570Cu) { return; }
    ctx->pc = 0x1B570Cu;
    // 0x1b570c: 0x10000078
    ctx->pc = 0x1B570Cu;
    {
        const bool branch_taken_0x1b570c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B5710u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x1b570c) {
            ctx->pc = 0x1B58F0u;
            goto label_1b58f0;
        }
    }
    ctx->pc = 0x1B5714u;
label_1b5714:
    // 0x1b5714: 0x8eb10070
    ctx->pc = 0x1b5714u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x1b5718: 0x8eb4004c
    ctx->pc = 0x1b5718u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_1b571c:
    // 0x1b571c: 0x8ea40064
    ctx->pc = 0x1b571cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x1b5720: 0x8ea30060
    ctx->pc = 0x1b5720u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1b5724: 0x83082b
    ctx->pc = 0x1b5724u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b5728: 0x1020006f
    ctx->pc = 0x1B5728u;
    {
        const bool branch_taken_0x1b5728 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b5728) {
            ctx->pc = 0x1B58E8u;
            goto label_1b58e8;
        }
    }
    ctx->pc = 0x1B5730u;
    // 0x1b5730: 0x92440000
    ctx->pc = 0x1b5730u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b5734: 0x1080006c
    ctx->pc = 0x1B5734u;
    {
        const bool branch_taken_0x1b5734 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B5738u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x1b5734) {
            ctx->pc = 0x1B58E8u;
            goto label_1b58e8;
        }
    }
    ctx->pc = 0x1B573Cu;
    // 0x1b573c: 0x2403000a
    ctx->pc = 0x1b573cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b5740: 0x14830007
    ctx->pc = 0x1B5740u;
    {
        const bool branch_taken_0x1b5740 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1B5744u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x1b5740) {
            ctx->pc = 0x1B5760u;
            goto label_1b5760;
        }
    }
    ctx->pc = 0x1B5748u;
    // 0x1b5748: 0xaeb10070
    ctx->pc = 0x1b5748u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 17));
    // 0x1b574c: 0x8ea4006c
    ctx->pc = 0x1b574cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x1b5750: 0x8ea30074
    ctx->pc = 0x1b5750u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x1b5754: 0x641821
    ctx->pc = 0x1b5754u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b5758: 0x1000fff0
    ctx->pc = 0x1B5758u;
    {
        const bool branch_taken_0x1b5758 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B575Cu;
        WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 3));
        if (branch_taken_0x1b5758) {
            ctx->pc = 0x1B571Cu;
            goto label_1b571c;
        }
    }
    ctx->pc = 0x1B5760u;
label_1b5760:
    // 0x1b5760: 0x14830007
    ctx->pc = 0x1B5760u;
    {
        const bool branch_taken_0x1b5760 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1b5760) {
            ctx->pc = 0x1B5780u;
            goto label_1b5780;
        }
    }
    ctx->pc = 0x1B5768u;
    // 0x1b5768: 0x8ea4006c
    ctx->pc = 0x1b5768u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x1b576c: 0x8ea30070
    ctx->pc = 0x1b576cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x1b5770: 0x42042
    ctx->pc = 0x1b5770u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 1));
    // 0x1b5774: 0x641821
    ctx->pc = 0x1b5774u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b5778: 0x1000ffe8
    ctx->pc = 0x1B5778u;
    {
        const bool branch_taken_0x1b5778 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B577Cu;
        WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 3));
        if (branch_taken_0x1b5778) {
            ctx->pc = 0x1B571Cu;
            goto label_1b571c;
        }
    }
    ctx->pc = 0x1B5780u;
label_1b5780:
    // 0x1b5780: 0x2c830080
    ctx->pc = 0x1b5780u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 4), 128));
    // 0x1b5784: 0x14600004
    ctx->pc = 0x1B5784u;
    {
        const bool branch_taken_0x1b5784 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B5788u;
        SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 4), 224));
        if (branch_taken_0x1b5784) {
            ctx->pc = 0x1B5798u;
            goto label_1b5798;
        }
    }
    ctx->pc = 0x1B578Cu;
    // 0x1b578c: 0x2c8100a0
    ctx->pc = 0x1b578cu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), 160));
    // 0x1b5790: 0x14200005
    ctx->pc = 0x1B5790u;
    {
        const bool branch_taken_0x1b5790 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b5790) {
            ctx->pc = 0x1B57A8u;
            goto label_1b57a8;
        }
    }
    ctx->pc = 0x1B5798u;
label_1b5798:
    // 0x1b5798: 0x1460000a
    ctx->pc = 0x1B5798u;
    {
        const bool branch_taken_0x1b5798 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B579Cu;
        SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), 256));
        if (branch_taken_0x1b5798) {
            ctx->pc = 0x1B57C4u;
            goto label_1b57c4;
        }
    }
    ctx->pc = 0x1B57A0u;
    // 0x1b57a0: 0x10200008
    ctx->pc = 0x1B57A0u;
    {
        const bool branch_taken_0x1b57a0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b57a0) {
            ctx->pc = 0x1B57C4u;
            goto label_1b57c4;
        }
    }
    ctx->pc = 0x1B57A8u;
label_1b57a8:
    // 0x1b57a8: 0x92430000
    ctx->pc = 0x1b57a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b57ac: 0x1060004e
    ctx->pc = 0x1B57ACu;
    {
        const bool branch_taken_0x1b57ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B57B0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x1b57ac) {
            ctx->pc = 0x1B58E8u;
            goto label_1b58e8;
        }
    }
    ctx->pc = 0x1B57B4u;
    // 0x1b57b4: 0x41200
    ctx->pc = 0x1b57b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 8));
    // 0x1b57b8: 0xb02d
    ctx->pc = 0x1b57b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b57bc: 0x10000005
    ctx->pc = 0x1B57BCu;
    {
        const bool branch_taken_0x1b57bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B57C0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x1b57bc) {
            ctx->pc = 0x1B57D4u;
            goto label_1b57d4;
        }
    }
    ctx->pc = 0x1B57C4u;
label_1b57c4:
    // 0x1b57c4: 0x8ea50008
    ctx->pc = 0x1b57c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1b57c8: 0xc06d960
    ctx->pc = 0x1B57C8u;
    SET_GPR_U32(ctx, 31, 0x1B57D0u);
    ctx->pc = 0x1B57CCu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    ctx->pc = 0x1B6580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6580_0x1b6580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B57D0u; }
    }
    if (ctx->pc != 0x1B57D0u) { return; }
    ctx->pc = 0x1B57D0u;
    // 0x1b57d0: 0x24160001
    ctx->pc = 0x1b57d0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
label_1b57d4:
    // 0x1b57d4: 0x8ea50008
    ctx->pc = 0x1b57d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1b57d8: 0xc06d93c
    ctx->pc = 0x1B57D8u;
    SET_GPR_U32(ctx, 31, 0x1B57E0u);
    ctx->pc = 0x1B57DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B64F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B64F0_0x1b64f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B57E0u; }
    }
    if (ctx->pc != 0x1B57E0u) { return; }
    ctx->pc = 0x1B57E0u;
    // 0x1b57e0: 0x8ea3001c
    ctx->pc = 0x1b57e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1b57e4: 0x40282d
    ctx->pc = 0x1b57e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b57e8: 0xa3082b
    ctx->pc = 0x1b57e8u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1b57ec: 0x10200038
    ctx->pc = 0x1B57ECu;
    {
        const bool branch_taken_0x1b57ec = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B57F0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b57ec) {
            ctx->pc = 0x1B58D0u;
            goto label_1b58d0;
        }
    }
    ctx->pc = 0x1B57F4u;
    // 0x1b57f4: 0xc06d728
    ctx->pc = 0x1B57F4u;
    SET_GPR_U32(ctx, 31, 0x1B57FCu);
    ctx->pc = 0x1B5CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CA0_0x1b5ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B57FCu; }
    }
    if (ctx->pc != 0x1B57FCu) { return; }
    ctx->pc = 0x1B57FCu;
    // 0x1b57fc: 0x40802d
    ctx->pc = 0x1b57fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5800: 0x8ea200a4
    ctx->pc = 0x1b5800u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 164)));
    // 0x1b5804: 0x1440002a
    ctx->pc = 0x1B5804u;
    {
        const bool branch_taken_0x1b5804 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B5808u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b5804) {
            ctx->pc = 0x1B58B0u;
            goto label_1b58b0;
        }
    }
    ctx->pc = 0x1B580Cu;
    // 0x1b580c: 0x3c010032
    ctx->pc = 0x1b580cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b5810: 0x24020003
    ctx->pc = 0x1b5810u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b5814: 0x902343f2
    ctx->pc = 0x1b5814u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17394)));
    // 0x1b5818: 0x10620024
    ctx->pc = 0x1B5818u;
    {
        const bool branch_taken_0x1b5818 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1B581Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 80));
        if (branch_taken_0x1b5818) {
            ctx->pc = 0x1B58ACu;
            goto label_1b58ac;
        }
    }
    ctx->pc = 0x1B5820u;
    // 0x1b5820: 0xc06e0a8
    ctx->pc = 0x1B5820u;
    SET_GPR_U32(ctx, 31, 0x1B5828u);
    ctx->pc = 0x1B82A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B82A0_0x1b82a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5828u; }
    }
    if (ctx->pc != 0x1B5828u) { return; }
    ctx->pc = 0x1B5828u;
    // 0x1b5828: 0x14400020
    ctx->pc = 0x1B5828u;
    {
        const bool branch_taken_0x1b5828 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B582Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b5828) {
            ctx->pc = 0x1B58ACu;
            goto label_1b58ac;
        }
    }
    ctx->pc = 0x1B5830u;
    // 0x1b5830: 0x8eb30070
    ctx->pc = 0x1b5830u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x1b5834: 0x8eb40080
    ctx->pc = 0x1b5834u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1b5838: 0x3c02ff00
    ctx->pc = 0x1b5838u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
    // 0x1b583c: 0x8eb70074
    ctx->pc = 0x1b583cu;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x1b5840: 0x2a0202d
    ctx->pc = 0x1b5840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5844: 0x8ebe0078
    ctx->pc = 0x1b5844u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1b5848: 0x200302d
    ctx->pc = 0x1b5848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b584c: 0x2c0382d
    ctx->pc = 0x1b584cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5850: 0x2821024
    ctx->pc = 0x1b5850u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1b5854: 0xaea20080
    ctx->pc = 0x1b5854u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 2));
    // 0x1b5858: 0x8ea20070
    ctx->pc = 0x1b5858u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x1b585c: 0x24420002
    ctx->pc = 0x1b585cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x1b5860: 0xaea20070
    ctx->pc = 0x1b5860u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 2));
    // 0x1b5864: 0x8ea20074
    ctx->pc = 0x1b5864u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x1b5868: 0x24420002
    ctx->pc = 0x1b5868u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x1b586c: 0xaea20074
    ctx->pc = 0x1b586cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 2));
    // 0x1b5870: 0x8ea20078
    ctx->pc = 0x1b5870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1b5874: 0x2442ffff
    ctx->pc = 0x1b5874u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b5878: 0xc06dc74
    ctx->pc = 0x1B5878u;
    SET_GPR_U32(ctx, 31, 0x1B5880u);
    ctx->pc = 0x1B587Cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 2));
    ctx->pc = 0x1B71D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B71D0_0x1b71d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5880u; }
    }
    if (ctx->pc != 0x1B5880u) { return; }
    ctx->pc = 0x1B5880u;
    // 0x1b5880: 0xaeb40080
    ctx->pc = 0x1b5880u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 20));
    // 0x1b5884: 0xaeb30070
    ctx->pc = 0x1b5884u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 19));
    // 0x1b5888: 0xaeb70074
    ctx->pc = 0x1b5888u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 23));
    // 0x1b588c: 0xaebe0078
    ctx->pc = 0x1b588cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 30));
    // 0x1b5890: 0x8ea30064
    ctx->pc = 0x1b5890u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x1b5894: 0x24640001
    ctx->pc = 0x1b5894u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b5898: 0xaea40064
    ctx->pc = 0x1b5898u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 4));
    // 0x1b589c: 0x8ea30060
    ctx->pc = 0x1b589cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1b58a0: 0x83082b
    ctx->pc = 0x1b58a0u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b58a4: 0x10200010
    ctx->pc = 0x1B58A4u;
    {
        const bool branch_taken_0x1b58a4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B58A8u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b58a4) {
            ctx->pc = 0x1B58E8u;
            goto label_1b58e8;
        }
    }
    ctx->pc = 0x1B58ACu;
label_1b58ac:
    // 0x1b58ac: 0x280282d
    ctx->pc = 0x1b58acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b58b0:
    // 0x1b58b0: 0x200302d
    ctx->pc = 0x1b58b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b58b4: 0x2a0202d
    ctx->pc = 0x1b58b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b58b8: 0xc06dc74
    ctx->pc = 0x1B58B8u;
    SET_GPR_U32(ctx, 31, 0x1B58C0u);
    ctx->pc = 0x1B58BCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B71D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B71D0_0x1b71d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B58C0u; }
    }
    if (ctx->pc != 0x1B58C0u) { return; }
    ctx->pc = 0x1B58C0u;
    // 0x1b58c0: 0x8ea30064
    ctx->pc = 0x1b58c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x1b58c4: 0x40a02d
    ctx->pc = 0x1b58c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b58c8: 0x24630001
    ctx->pc = 0x1b58c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b58cc: 0xaea30064
    ctx->pc = 0x1b58ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 3));
label_1b58d0:
    // 0x1b58d0: 0x8ea4006c
    ctx->pc = 0x1b58d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x1b58d4: 0x8ea30070
    ctx->pc = 0x1b58d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x1b58d8: 0x2c42006
    ctx->pc = 0x1b58d8u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 22) & 0x1F));
    // 0x1b58dc: 0x641821
    ctx->pc = 0x1b58dcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b58e0: 0x1000ff8e
    ctx->pc = 0x1B58E0u;
    {
        const bool branch_taken_0x1b58e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B58E4u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 3));
        if (branch_taken_0x1b58e0) {
            ctx->pc = 0x1B571Cu;
            goto label_1b571c;
        }
    }
    ctx->pc = 0x1B58E8u;
label_1b58e8:
    // 0x1b58e8: 0xaeb4004c
    ctx->pc = 0x1b58e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 20));
label_1b58ec:
    // 0x1b58ec: 0xdfbf0090
    ctx->pc = 0x1b58ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1b58f0:
    // 0x1b58f0: 0x7bbe0080
    ctx->pc = 0x1b58f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b58f4: 0x7bb70070
    ctx->pc = 0x1b58f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b58f8: 0x7bb60060
    ctx->pc = 0x1b58f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b58fc: 0x7bb50050
    ctx->pc = 0x1b58fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b5900: 0x7bb40040
    ctx->pc = 0x1b5900u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b5904: 0x7bb30030
    ctx->pc = 0x1b5904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5908: 0x7bb20020
    ctx->pc = 0x1b5908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b590c: 0x7bb10010
    ctx->pc = 0x1b590cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5910: 0x7bb00000
    ctx->pc = 0x1b5910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5914: 0x3e00008
    ctx->pc = 0x1B5914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5918u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B56F4u: goto label_1b56f4;
            case 0x1B5714u: goto label_1b5714;
            case 0x1B571Cu: goto label_1b571c;
            case 0x1B5760u: goto label_1b5760;
            case 0x1B5780u: goto label_1b5780;
            case 0x1B5798u: goto label_1b5798;
            case 0x1B57A8u: goto label_1b57a8;
            case 0x1B57C4u: goto label_1b57c4;
            case 0x1B57D4u: goto label_1b57d4;
            case 0x1B58ACu: goto label_1b58ac;
            case 0x1B58B0u: goto label_1b58b0;
            case 0x1B58D0u: goto label_1b58d0;
            case 0x1B58E8u: goto label_1b58e8;
            case 0x1B58ECu: goto label_1b58ec;
            case 0x1B58F0u: goto label_1b58f0;
            case 0x1B5958u: goto label_1b5958;
            case 0x1B5984u: goto label_1b5984;
            case 0x1B5998u: goto label_1b5998;
            case 0x1B59E0u: goto label_1b59e0;
            case 0x1B59E4u: goto label_1b59e4;
            case 0x1B59ECu: goto label_1b59ec;
            case 0x1B59F8u: goto label_1b59f8;
            case 0x1B5A28u: goto label_1b5a28;
            case 0x1B5A2Cu: goto label_1b5a2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B591Cu;
    // 0x1b591c: 0x0
    ctx->pc = 0x1b591cu;
    // NOP
    // 0x1b5920: 0x27bdffc0
    ctx->pc = 0x1b5920u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b5924: 0x3c010032
    ctx->pc = 0x1b5924u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b5928: 0xffbf0030
    ctx->pc = 0x1b5928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b592c: 0x7fb20020
    ctx->pc = 0x1b592cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b5930: 0x7fb10010
    ctx->pc = 0x1b5930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b5934: 0x80902d
    ctx->pc = 0x1b5934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5938: 0x7fb00000
    ctx->pc = 0x1b5938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b593c: 0xa0882d
    ctx->pc = 0x1b593cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5940: 0x902243eb
    ctx->pc = 0x1b5940u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17387)));
    // 0x1b5944: 0x3c10002c
    ctx->pc = 0x1b5944u;
    SET_GPR_U32(ctx, 16, ((uint32_t)44 << 16));
    // 0x1b5948: 0x14400003
    ctx->pc = 0x1B5948u;
    {
        const bool branch_taken_0x1b5948 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B594Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294945344));
        if (branch_taken_0x1b5948) {
            ctx->pc = 0x1B5958u;
            goto label_1b5958;
        }
    }
    ctx->pc = 0x1B5950u;
    // 0x1b5950: 0x10000036
    ctx->pc = 0x1B5950u;
    {
        const bool branch_taken_0x1b5950 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B5954u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b5950) {
            ctx->pc = 0x1B5A2Cu;
            goto label_1b5a2c;
        }
    }
    ctx->pc = 0x1B5958u;
label_1b5958:
    // 0x1b5958: 0xae000084
    ctx->pc = 0x1b5958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x1b595c: 0x92440000
    ctx->pc = 0x1b595cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b5960: 0x10800031
    ctx->pc = 0x1B5960u;
    {
        const bool branch_taken_0x1b5960 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B5964u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x1b5960) {
            ctx->pc = 0x1B5A28u;
            goto label_1b5a28;
        }
    }
    ctx->pc = 0x1B5968u;
    // 0x1b5968: 0x2402000a
    ctx->pc = 0x1b5968u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b596c: 0x1082fffa
    ctx->pc = 0x1B596Cu;
    {
        const bool branch_taken_0x1b596c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1B5970u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 128));
        if (branch_taken_0x1b596c) {
            ctx->pc = 0x1B5958u;
            goto label_1b5958;
        }
    }
    ctx->pc = 0x1B5974u;
    // 0x1b5974: 0x14400003
    ctx->pc = 0x1B5974u;
    {
        const bool branch_taken_0x1b5974 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B5978u;
        SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), 160));
        if (branch_taken_0x1b5974) {
            ctx->pc = 0x1B5984u;
            goto label_1b5984;
        }
    }
    ctx->pc = 0x1B597Cu;
    // 0x1b597c: 0x14200006
    ctx->pc = 0x1B597Cu;
    {
        const bool branch_taken_0x1b597c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b597c) {
            ctx->pc = 0x1B5998u;
            goto label_1b5998;
        }
    }
    ctx->pc = 0x1B5984u;
label_1b5984:
    // 0x1b5984: 0x2c8200e0
    ctx->pc = 0x1b5984u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 224));
    // 0x1b5988: 0x14400018
    ctx->pc = 0x1B5988u;
    {
        const bool branch_taken_0x1b5988 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B598Cu;
        SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), 256));
        if (branch_taken_0x1b5988) {
            ctx->pc = 0x1B59ECu;
            goto label_1b59ec;
        }
    }
    ctx->pc = 0x1B5990u;
    // 0x1b5990: 0x10200016
    ctx->pc = 0x1B5990u;
    {
        const bool branch_taken_0x1b5990 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b5990) {
            ctx->pc = 0x1B59ECu;
            goto label_1b59ec;
        }
    }
    ctx->pc = 0x1B5998u;
label_1b5998:
    // 0x1b5998: 0x92430000
    ctx->pc = 0x1b5998u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b599c: 0x10600022
    ctx->pc = 0x1B599Cu;
    {
        const bool branch_taken_0x1b599c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B59A0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x1b599c) {
            ctx->pc = 0x1B5A28u;
            goto label_1b5a28;
        }
    }
    ctx->pc = 0x1B59A4u;
    // 0x1b59a4: 0x41200
    ctx->pc = 0x1b59a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 8));
    // 0x1b59a8: 0x431025
    ctx->pc = 0x1b59a8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b59ac: 0x24438000
    ctx->pc = 0x1b59acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x1b59b0: 0x2463fea5
    ctx->pc = 0x1b59b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966949));
    // 0x1b59b4: 0x2c610002
    ctx->pc = 0x1b59b4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x1b59b8: 0x14200009
    ctx->pc = 0x1B59B8u;
    {
        const bool branch_taken_0x1b59b8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b59b8) {
            ctx->pc = 0x1B59E0u;
            goto label_1b59e0;
        }
    }
    ctx->pc = 0x1B59C0u;
    // 0x1b59c0: 0x34038160
    ctx->pc = 0x1b59c0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 33120));
    // 0x1b59c4: 0x10430007
    ctx->pc = 0x1B59C4u;
    {
        const bool branch_taken_0x1b59c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1B59C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b59c4) {
            ctx->pc = 0x1B59E4u;
            goto label_1b59e4;
        }
    }
    ctx->pc = 0x1B59CCu;
    // 0x1b59cc: 0x34038175
    ctx->pc = 0x1b59ccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 33141));
    // 0x1b59d0: 0x10430003
    ctx->pc = 0x1B59D0u;
    {
        const bool branch_taken_0x1b59d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1B59D4u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 33142));
        if (branch_taken_0x1b59d0) {
            ctx->pc = 0x1B59E0u;
            goto label_1b59e0;
        }
    }
    ctx->pc = 0x1B59D8u;
    // 0x1b59d8: 0x14430007
    ctx->pc = 0x1B59D8u;
    {
        const bool branch_taken_0x1b59d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1b59d8) {
            ctx->pc = 0x1B59F8u;
            goto label_1b59f8;
        }
    }
    ctx->pc = 0x1B59E0u;
label_1b59e0:
    // 0x1b59e0: 0x24030001
    ctx->pc = 0x1b59e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1b59e4:
    // 0x1b59e4: 0x10000004
    ctx->pc = 0x1B59E4u;
    {
        const bool branch_taken_0x1b59e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B59E8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
        if (branch_taken_0x1b59e4) {
            ctx->pc = 0x1B59F8u;
            goto label_1b59f8;
        }
    }
    ctx->pc = 0x1B59ECu;
label_1b59ec:
    // 0x1b59ec: 0x8e050008
    ctx->pc = 0x1b59ecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b59f0: 0xc06d960
    ctx->pc = 0x1B59F0u;
    SET_GPR_U32(ctx, 31, 0x1B59F8u);
    ctx->pc = 0x1B59F4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    ctx->pc = 0x1B6580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6580_0x1b6580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B59F8u; }
    }
    if (ctx->pc != 0x1B59F8u) { return; }
    ctx->pc = 0x1B59F8u;
label_1b59f8:
    // 0x1b59f8: 0x8e050008
    ctx->pc = 0x1b59f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b59fc: 0xc06d93c
    ctx->pc = 0x1B59FCu;
    SET_GPR_U32(ctx, 31, 0x1B5A04u);
    ctx->pc = 0x1B5A00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B64F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B64F0_0x1b64f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A04u; }
    }
    if (ctx->pc != 0x1B5A04u) { return; }
    ctx->pc = 0x1B5A04u;
    // 0x1b5a04: 0x8e03001c
    ctx->pc = 0x1b5a04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1b5a08: 0x43082b
    ctx->pc = 0x1b5a08u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b5a0c: 0x1020ffd2
    ctx->pc = 0x1B5A0Cu;
    {
        const bool branch_taken_0x1b5a0c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B5A10u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b5a0c) {
            ctx->pc = 0x1B5958u;
            goto label_1b5958;
        }
    }
    ctx->pc = 0x1B5A14u;
    // 0x1b5a14: 0x200202d
    ctx->pc = 0x1b5a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a18: 0xc06d770
    ctx->pc = 0x1B5A18u;
    SET_GPR_U32(ctx, 31, 0x1B5A20u);
    ctx->pc = 0x1B5A1Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B5DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5DC0_0x1b5dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A20u; }
    }
    if (ctx->pc != 0x1B5A20u) { return; }
    ctx->pc = 0x1B5A20u;
    // 0x1b5a20: 0x1000ffcd
    ctx->pc = 0x1B5A20u;
    {
        const bool branch_taken_0x1b5a20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B5A24u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b5a20) {
            ctx->pc = 0x1B5958u;
            goto label_1b5958;
        }
    }
    ctx->pc = 0x1B5A28u;
label_1b5a28:
    // 0x1b5a28: 0x220102d
    ctx->pc = 0x1b5a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b5a2c:
    // 0x1b5a2c: 0xdfbf0030
    ctx->pc = 0x1b5a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5a30: 0x7bb20020
    ctx->pc = 0x1b5a30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5a34: 0x7bb10010
    ctx->pc = 0x1b5a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5a38: 0x7bb00000
    ctx->pc = 0x1b5a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5a3c: 0x3e00008
    ctx->pc = 0x1B5A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5A40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B56F4u: goto label_1b56f4;
            case 0x1B5714u: goto label_1b5714;
            case 0x1B571Cu: goto label_1b571c;
            case 0x1B5760u: goto label_1b5760;
            case 0x1B5780u: goto label_1b5780;
            case 0x1B5798u: goto label_1b5798;
            case 0x1B57A8u: goto label_1b57a8;
            case 0x1B57C4u: goto label_1b57c4;
            case 0x1B57D4u: goto label_1b57d4;
            case 0x1B58ACu: goto label_1b58ac;
            case 0x1B58B0u: goto label_1b58b0;
            case 0x1B58D0u: goto label_1b58d0;
            case 0x1B58E8u: goto label_1b58e8;
            case 0x1B58ECu: goto label_1b58ec;
            case 0x1B58F0u: goto label_1b58f0;
            case 0x1B5958u: goto label_1b5958;
            case 0x1B5984u: goto label_1b5984;
            case 0x1B5998u: goto label_1b5998;
            case 0x1B59E0u: goto label_1b59e0;
            case 0x1B59E4u: goto label_1b59e4;
            case 0x1B59ECu: goto label_1b59ec;
            case 0x1B59F8u: goto label_1b59f8;
            case 0x1B5A28u: goto label_1b5a28;
            case 0x1B5A2Cu: goto label_1b5a2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B5A44u;
    // 0x1b5a44: 0x0
    ctx->pc = 0x1b5a44u;
    // NOP
    // 0x1b5a48: 0x0
    ctx->pc = 0x1b5a48u;
    // NOP
    // 0x1b5a4c: 0x0
    ctx->pc = 0x1b5a4cu;
    // NOP
}
