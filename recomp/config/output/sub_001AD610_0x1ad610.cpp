#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AD610
// Address: 0x1ad610 - 0x1ad790
void sub_001AD610_0x1ad610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ad610u;

    // 0x1ad610: 0x27bdffd0
    ctx->pc = 0x1ad610u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ad614: 0xffbf0020
    ctx->pc = 0x1ad614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ad618: 0x7fb10010
    ctx->pc = 0x1ad618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ad61c: 0x14800003
    ctx->pc = 0x1AD61Cu;
    {
        const bool branch_taken_0x1ad61c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AD620u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        if (branch_taken_0x1ad61c) {
            ctx->pc = 0x1AD62Cu;
            goto label_1ad62c;
        }
    }
    ctx->pc = 0x1AD624u;
    // 0x1ad624: 0x10000031
    ctx->pc = 0x1AD624u;
    {
        const bool branch_taken_0x1ad624 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD628u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1ad624) {
            ctx->pc = 0x1AD6ECu;
            goto label_1ad6ec;
        }
    }
    ctx->pc = 0x1AD62Cu;
label_1ad62c:
    // 0x1ad62c: 0x3c010032
    ctx->pc = 0x1ad62cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1ad630: 0x24020002
    ctx->pc = 0x1ad630u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad634: 0x90234405
    ctx->pc = 0x1ad634u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17413)));
    // 0x1ad638: 0x14620003
    ctx->pc = 0x1AD638u;
    {
        const bool branch_taken_0x1ad638 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1AD63Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
        if (branch_taken_0x1ad638) {
            ctx->pc = 0x1AD648u;
            goto label_1ad648;
        }
    }
    ctx->pc = 0x1AD640u;
    // 0x1ad640: 0x1000002a
    ctx->pc = 0x1AD640u;
    {
        const bool branch_taken_0x1ad640 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD644u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1ad640) {
            ctx->pc = 0x1AD6ECu;
            goto label_1ad6ec;
        }
    }
    ctx->pc = 0x1AD648u;
label_1ad648:
    // 0x1ad648: 0x3c11002b
    ctx->pc = 0x1ad648u;
    SET_GPR_U32(ctx, 17, ((uint32_t)43 << 16));
    // 0x1ad64c: 0x90223841
    ctx->pc = 0x1ad64cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 14401)));
    // 0x1ad650: 0x28420008
    ctx->pc = 0x1ad650u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 8));
    // 0x1ad654: 0x14400003
    ctx->pc = 0x1AD654u;
    {
        const bool branch_taken_0x1ad654 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AD658u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 14400));
        if (branch_taken_0x1ad654) {
            ctx->pc = 0x1AD664u;
            goto label_1ad664;
        }
    }
    ctx->pc = 0x1AD65Cu;
    // 0x1ad65c: 0x10000023
    ctx->pc = 0x1AD65Cu;
    {
        const bool branch_taken_0x1ad65c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD660u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1ad65c) {
            ctx->pc = 0x1AD6ECu;
            goto label_1ad6ec;
        }
    }
    ctx->pc = 0x1AD664u;
label_1ad664:
    // 0x1ad664: 0x92230003
    ctx->pc = 0x1ad664u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1ad668: 0x24620001
    ctx->pc = 0x1ad668u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ad66c: 0x305000ff
    ctx->pc = 0x1ad66cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ad670: 0x2a020008
    ctx->pc = 0x1ad670u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 8));
    // 0x1ad674: 0x14400002
    ctx->pc = 0x1AD674u;
    {
        const bool branch_taken_0x1ad674 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AD678u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
        if (branch_taken_0x1ad674) {
            ctx->pc = 0x1AD680u;
            goto label_1ad680;
        }
    }
    ctx->pc = 0x1AD67Cu;
    // 0x1ad67c: 0x802d
    ctx->pc = 0x1ad67cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad680:
    // 0x1ad680: 0x24060010
    ctx->pc = 0x1ad680u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ad684: 0x21040
    ctx->pc = 0x1ad684u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ad688: 0x511021
    ctx->pc = 0x1ad688u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ad68c: 0xa4400014
    ctx->pc = 0x1ad68cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ad690: 0x92220003
    ctx->pc = 0x1ad690u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1ad694: 0x511021
    ctx->pc = 0x1ad694u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ad698: 0xa045000c
    ctx->pc = 0x1ad698u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ad69c: 0x92220003
    ctx->pc = 0x1ad69cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1ad6a0: 0x80282d
    ctx->pc = 0x1ad6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad6a4: 0x21100
    ctx->pc = 0x1ad6a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ad6a8: 0x2221021
    ctx->pc = 0x1ad6a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ad6ac: 0xc041eac
    ctx->pc = 0x1AD6ACu;
    SET_GPR_U32(ctx, 31, 0x1AD6B4u);
    ctx->pc = 0x1AD6B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 36));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6B4u; }
    }
    if (ctx->pc != 0x1AD6B4u) { return; }
    ctx->pc = 0x1AD6B4u;
    // 0x1ad6b4: 0x92220003
    ctx->pc = 0x1ad6b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1ad6b8: 0x21100
    ctx->pc = 0x1ad6b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ad6bc: 0x511021
    ctx->pc = 0x1ad6bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ad6c0: 0xa0400033
    ctx->pc = 0x1ad6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 51), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad6c4: 0xa2300003
    ctx->pc = 0x1ad6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 16));
    // 0x1ad6c8: 0x92220001
    ctx->pc = 0x1ad6c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1ad6cc: 0x24420001
    ctx->pc = 0x1ad6ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ad6d0: 0xa2220001
    ctx->pc = 0x1ad6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ad6d4: 0x92220000
    ctx->pc = 0x1ad6d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ad6d8: 0x14400004
    ctx->pc = 0x1AD6D8u;
    {
        const bool branch_taken_0x1ad6d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AD6DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ad6d8) {
            ctx->pc = 0x1AD6ECu;
            goto label_1ad6ec;
        }
    }
    ctx->pc = 0x1AD6E0u;
    // 0x1ad6e0: 0x24020001
    ctx->pc = 0x1ad6e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad6e4: 0xa2220000
    ctx->pc = 0x1ad6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ad6e8: 0x102d
    ctx->pc = 0x1ad6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad6ec:
    // 0x1ad6ec: 0xdfbf0020
    ctx->pc = 0x1ad6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad6f0: 0x7bb10010
    ctx->pc = 0x1ad6f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad6f4: 0x7bb00000
    ctx->pc = 0x1ad6f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad6f8: 0x3e00008
    ctx->pc = 0x1AD6F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD6FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD62Cu: goto label_1ad62c;
            case 0x1AD648u: goto label_1ad648;
            case 0x1AD664u: goto label_1ad664;
            case 0x1AD680u: goto label_1ad680;
            case 0x1AD6ECu: goto label_1ad6ec;
            case 0x1AD724u: goto label_1ad724;
            case 0x1AD740u: goto label_1ad740;
            case 0x1AD774u: goto label_1ad774;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD700u;
    // 0x1ad700: 0x3c02002b
    ctx->pc = 0x1ad700u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1ad704: 0x3c03002b
    ctx->pc = 0x1ad704u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1ad708: 0x24423934
    ctx->pc = 0x1ad708u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14644));
    // 0x1ad70c: 0x441021
    ctx->pc = 0x1ad70cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ad710: 0x90420000
    ctx->pc = 0x1ad710u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad714: 0x14400003
    ctx->pc = 0x1AD714u;
    {
        const bool branch_taken_0x1ad714 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AD718u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 14400));
        if (branch_taken_0x1ad714) {
            ctx->pc = 0x1AD724u;
            goto label_1ad724;
        }
    }
    ctx->pc = 0x1AD71Cu;
    // 0x1ad71c: 0x10000008
    ctx->pc = 0x1AD71Cu;
    {
        const bool branch_taken_0x1ad71c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD720u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ad71c) {
            ctx->pc = 0x1AD740u;
            goto label_1ad740;
        }
    }
    ctx->pc = 0x1AD724u;
label_1ad724:
    // 0x1ad724: 0x831821
    ctx->pc = 0x1ad724u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ad728: 0x24020002
    ctx->pc = 0x1ad728u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad72c: 0x906300e4
    ctx->pc = 0x1ad72cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 228)));
    // 0x1ad730: 0x10620003
    ctx->pc = 0x1AD730u;
    {
        const bool branch_taken_0x1ad730 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1AD734u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ad730) {
            ctx->pc = 0x1AD740u;
            goto label_1ad740;
        }
    }
    ctx->pc = 0x1AD738u;
    // 0x1ad738: 0x10000001
    ctx->pc = 0x1AD738u;
    {
        const bool branch_taken_0x1ad738 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD73Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1ad738) {
            ctx->pc = 0x1AD740u;
            goto label_1ad740;
        }
    }
    ctx->pc = 0x1AD740u;
label_1ad740:
    // 0x1ad740: 0x3e00008
    ctx->pc = 0x1AD740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD62Cu: goto label_1ad62c;
            case 0x1AD648u: goto label_1ad648;
            case 0x1AD664u: goto label_1ad664;
            case 0x1AD680u: goto label_1ad680;
            case 0x1AD6ECu: goto label_1ad6ec;
            case 0x1AD724u: goto label_1ad724;
            case 0x1AD740u: goto label_1ad740;
            case 0x1AD774u: goto label_1ad774;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD748u;
    // 0x1ad748: 0x0
    ctx->pc = 0x1ad748u;
    // NOP
    // 0x1ad74c: 0x0
    ctx->pc = 0x1ad74cu;
    // NOP
    // 0x1ad750: 0x27bdfff0
    ctx->pc = 0x1ad750u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ad754: 0x3c03002b
    ctx->pc = 0x1ad754u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1ad758: 0xffbf0000
    ctx->pc = 0x1ad758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ad75c: 0x3c01002b
    ctx->pc = 0x1ad75cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ad760: 0x8c223944
    ctx->pc = 0x1ad760u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 14660)));
    // 0x1ad764: 0x10400003
    ctx->pc = 0x1AD764u;
    {
        const bool branch_taken_0x1ad764 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD768u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 14400));
        if (branch_taken_0x1ad764) {
            ctx->pc = 0x1AD774u;
            goto label_1ad774;
        }
    }
    ctx->pc = 0x1AD76Cu;
    // 0x1ad76c: 0xc04a4d4
    ctx->pc = 0x1AD76Cu;
    SET_GPR_U32(ctx, 31, 0x1AD774u);
    ctx->pc = 0x1AD770u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 260)));
    ctx->pc = 0x129350u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129350_0x129350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD774u; }
    }
    if (ctx->pc != 0x1AD774u) { return; }
    ctx->pc = 0x1AD774u;
label_1ad774:
    // 0x1ad774: 0xc06b570
    ctx->pc = 0x1AD774u;
    SET_GPR_U32(ctx, 31, 0x1AD77Cu);
    ctx->pc = 0x1AD5C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD5C0_0x1ad5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD77Cu; }
    }
    if (ctx->pc != 0x1AD77Cu) { return; }
    ctx->pc = 0x1AD77Cu;
    // 0x1ad77c: 0xdfbf0000
    ctx->pc = 0x1ad77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad780: 0x3e00008
    ctx->pc = 0x1AD780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD784u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD62Cu: goto label_1ad62c;
            case 0x1AD648u: goto label_1ad648;
            case 0x1AD664u: goto label_1ad664;
            case 0x1AD680u: goto label_1ad680;
            case 0x1AD6ECu: goto label_1ad6ec;
            case 0x1AD724u: goto label_1ad724;
            case 0x1AD740u: goto label_1ad740;
            case 0x1AD774u: goto label_1ad774;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD788u;
    // 0x1ad788: 0x0
    ctx->pc = 0x1ad788u;
    // NOP
    // 0x1ad78c: 0x0
    ctx->pc = 0x1ad78cu;
    // NOP
}
