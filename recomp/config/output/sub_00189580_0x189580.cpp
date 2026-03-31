#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00189580
// Address: 0x189580 - 0x1896e8
void sub_00189580_0x189580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x189580u;

    // 0x189580: 0x27bdff70
    ctx->pc = 0x189580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x189584: 0xffb60070
    ctx->pc = 0x189584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x189588: 0xffb40050
    ctx->pc = 0x189588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x18958c: 0x100b02d
    ctx->pc = 0x18958cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189590: 0xffb20030
    ctx->pc = 0x189590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x189594: 0xe0a02d
    ctx->pc = 0x189594u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189598: 0xffb10020
    ctx->pc = 0x189598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x18959c: 0x80902d
    ctx->pc = 0x18959cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1895a0: 0xffb00010
    ctx->pc = 0x1895a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1895a4: 0xffbf0080
    ctx->pc = 0x1895a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1895a8: 0xc0802d
    ctx->pc = 0x1895a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1895ac: 0xffb50060
    ctx->pc = 0x1895acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1895b0: 0xffb30040
    ctx->pc = 0x1895b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1895b4: 0x8e020000
    ctx->pc = 0x1895b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1895b8: 0x28422081
    ctx->pc = 0x1895b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 8321));
    // 0x1895bc: 0x14400006
    ctx->pc = 0x1895BCu;
    {
        const bool branch_taken_0x1895bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1895C0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1895bc) {
            ctx->pc = 0x1895D8u;
            goto label_1895d8;
        }
    }
    ctx->pc = 0x1895C4u;
    // 0x1895c4: 0x3c040024
    ctx->pc = 0x1895c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1895c8: 0xc0625f6
    ctx->pc = 0x1895C8u;
    SET_GPR_U32(ctx, 31, 0x1895D0u);
    ctx->pc = 0x1895CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6808));
    ctx->pc = 0x1897D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001897D8_0x1897d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1895D0u; }
    }
    if (ctx->pc != 0x1895D0u) { return; }
    ctx->pc = 0x1895D0u;
    // 0x1895d0: 0x1000003a
    ctx->pc = 0x1895D0u;
    {
        const bool branch_taken_0x1895d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1895D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1895d0) {
            ctx->pc = 0x1896BCu;
            goto label_1896bc;
        }
    }
    ctx->pc = 0x1895D8u;
label_1895d8:
    // 0x1895d8: 0x3c150029
    ctx->pc = 0x1895d8u;
    SET_GPR_U32(ctx, 21, ((uint32_t)41 << 16));
    // 0x1895dc: 0x3c130029
    ctx->pc = 0x1895dcu;
    SET_GPR_U32(ctx, 19, ((uint32_t)41 << 16));
    // 0x1895e0: 0xc045198
    ctx->pc = 0x1895E0u;
    SET_GPR_U32(ctx, 31, 0x1895E8u);
    ctx->pc = 0x1895E4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 16704)));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1895E8u; }
    }
    if (ctx->pc != 0x1895E8u) { return; }
    ctx->pc = 0x1895E8u;
    // 0x1895e8: 0xae721f80
    ctx->pc = 0x1895e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8064), GPR_U32(ctx, 18));
    // 0x1895ec: 0x26641f80
    ctx->pc = 0x1895ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 8064));
    // 0x1895f0: 0xac910004
    ctx->pc = 0x1895f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x1895f4: 0x8e020000
    ctx->pc = 0x1895f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1895f8: 0xac820008
    ctx->pc = 0x1895f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1895fc: 0x8e030000
    ctx->pc = 0x1895fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x189600: 0x1860000f
    ctx->pc = 0x189600u;
    {
        const bool branch_taken_0x189600 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x189604u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x189600) {
            ctx->pc = 0x189640u;
            goto label_189640;
        }
    }
    ctx->pc = 0x189608u;
    // 0x189608: 0x2486000c
    ctx->pc = 0x189608u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 12));
    // 0x18960c: 0x3c070029
    ctx->pc = 0x18960cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)41 << 16));
    // 0x189610: 0x2851021
    ctx->pc = 0x189610u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x189614: 0x0
    ctx->pc = 0x189614u;
    // NOP
label_189618:
    // 0x189618: 0xc52021
    ctx->pc = 0x189618u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x18961c: 0x90430000
    ctx->pc = 0x18961cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189620: 0x24a50001
    ctx->pc = 0x189620u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x189624: 0xa0830000
    ctx->pc = 0x189624u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x189628: 0x8e020000
    ctx->pc = 0x189628u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18962c: 0xa2102a
    ctx->pc = 0x18962cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x189630: 0x1440fff9
    ctx->pc = 0x189630u;
    {
        const bool branch_taken_0x189630 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x189634u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        if (branch_taken_0x189630) {
            ctx->pc = 0x189618u;
            goto label_189618;
        }
    }
    ctx->pc = 0x189638u;
    // 0x189638: 0x10000003
    ctx->pc = 0x189638u;
    {
        const bool branch_taken_0x189638 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18963Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 7), 3032));
        if (branch_taken_0x189638) {
            ctx->pc = 0x189648u;
            goto label_189648;
        }
    }
    ctx->pc = 0x189640u;
label_189640:
    // 0x189640: 0x3c070029
    ctx->pc = 0x189640u;
    SET_GPR_U32(ctx, 7, ((uint32_t)41 << 16));
    // 0x189644: 0x24f00bd8
    ctx->pc = 0x189644u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 7), 3032));
label_189648:
    // 0x189648: 0xc045ef8
    ctx->pc = 0x189648u;
    SET_GPR_U32(ctx, 31, 0x189650u);
    ctx->pc = 0x18964Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x117BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117BE0_0x117be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189650u; }
    }
    if (ctx->pc != 0x189650u) { return; }
    ctx->pc = 0x189650u;
    // 0x189650: 0x24030001
    ctx->pc = 0x189650u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x189654: 0x14430006
    ctx->pc = 0x189654u;
    {
        const bool branch_taken_0x189654 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x189658u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 19), 8064));
        if (branch_taken_0x189654) {
            ctx->pc = 0x189670u;
            goto label_189670;
        }
    }
    ctx->pc = 0x18965Cu;
    // 0x18965c: 0x3c040024
    ctx->pc = 0x18965cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x189660: 0xc0625f6
    ctx->pc = 0x189660u;
    SET_GPR_U32(ctx, 31, 0x189668u);
    ctx->pc = 0x189664u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6848));
    ctx->pc = 0x1897D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001897D8_0x1897d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189668u; }
    }
    if (ctx->pc != 0x189668u) { return; }
    ctx->pc = 0x189668u;
    // 0x189668: 0x1000000d
    ctx->pc = 0x189668u;
    {
        const bool branch_taken_0x189668 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x189668) {
            ctx->pc = 0x1896A0u;
            goto label_1896a0;
        }
    }
    ctx->pc = 0x189670u;
label_189670:
    // 0x189670: 0x3c058000
    ctx->pc = 0x189670u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x189674: 0x200202d
    ctx->pc = 0x189674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189678: 0x2c0582d
    ctx->pc = 0x189678u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18967c: 0xafa00000
    ctx->pc = 0x18967cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x189680: 0x34a5131c
    ctx->pc = 0x189680u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 4892));
    // 0x189684: 0x24060001
    ctx->pc = 0x189684u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x189688: 0x24082090
    ctx->pc = 0x189688u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8336));
    // 0x18968c: 0xe0482d
    ctx->pc = 0x18968cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189690: 0xc045e7a
    ctx->pc = 0x189690u;
    SET_GPR_U32(ctx, 31, 0x189698u);
    ctx->pc = 0x189694u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 8336));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189698u; }
    }
    if (ctx->pc != 0x189698u) { return; }
    ctx->pc = 0x189698u;
    // 0x189698: 0x4410005
    ctx->pc = 0x189698u;
    {
        const bool branch_taken_0x189698 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x189698) {
            ctx->pc = 0x1896B0u;
            goto label_1896b0;
        }
    }
    ctx->pc = 0x1896A0u;
label_1896a0:
    // 0x1896a0: 0xc045190
    ctx->pc = 0x1896A0u;
    SET_GPR_U32(ctx, 31, 0x1896A8u);
    ctx->pc = 0x1896A4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 16704)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1896A8u; }
    }
    if (ctx->pc != 0x1896A8u) { return; }
    ctx->pc = 0x1896A8u;
    // 0x1896a8: 0x10000004
    ctx->pc = 0x1896A8u;
    {
        const bool branch_taken_0x1896a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1896ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1896a8) {
            ctx->pc = 0x1896BCu;
            goto label_1896bc;
        }
    }
    ctx->pc = 0x1896B0u;
label_1896b0:
    // 0x1896b0: 0xc045190
    ctx->pc = 0x1896B0u;
    SET_GPR_U32(ctx, 31, 0x1896B8u);
    ctx->pc = 0x1896B4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 16704)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1896B8u; }
    }
    if (ctx->pc != 0x1896B8u) { return; }
    ctx->pc = 0x1896B8u;
    // 0x1896b8: 0x24020001
    ctx->pc = 0x1896b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1896bc:
    // 0x1896bc: 0xdfbf0080
    ctx->pc = 0x1896bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1896c0: 0xdfb60070
    ctx->pc = 0x1896c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1896c4: 0xdfb50060
    ctx->pc = 0x1896c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1896c8: 0xdfb40050
    ctx->pc = 0x1896c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1896cc: 0xdfb30040
    ctx->pc = 0x1896ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1896d0: 0xdfb20030
    ctx->pc = 0x1896d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1896d4: 0xdfb10020
    ctx->pc = 0x1896d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1896d8: 0xdfb00010
    ctx->pc = 0x1896d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1896dc: 0x3e00008
    ctx->pc = 0x1896DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1896E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1895D8u: goto label_1895d8;
            case 0x189618u: goto label_189618;
            case 0x189640u: goto label_189640;
            case 0x189648u: goto label_189648;
            case 0x189670u: goto label_189670;
            case 0x1896A0u: goto label_1896a0;
            case 0x1896B0u: goto label_1896b0;
            case 0x1896BCu: goto label_1896bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1896E4u;
    // 0x1896e4: 0x0
    ctx->pc = 0x1896e4u;
    // NOP
}
