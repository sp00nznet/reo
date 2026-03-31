#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017B530
// Address: 0x17b530 - 0x17ba20
void sub_0017B530_0x17b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17b530u;

    // 0x17b530: 0x27bdffd0
    ctx->pc = 0x17b530u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b534: 0xffb10008
    ctx->pc = 0x17b534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17b538: 0x80882d
    ctx->pc = 0x17b538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b53c: 0xffb20010
    ctx->pc = 0x17b53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17b540: 0xa0902d
    ctx->pc = 0x17b540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b544: 0xffb30018
    ctx->pc = 0x17b544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17b548: 0xc0982d
    ctx->pc = 0x17b548u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b54c: 0xffb00000
    ctx->pc = 0x17b54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b550: 0x240202d
    ctx->pc = 0x17b550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b554: 0xffbf0020
    ctx->pc = 0x17b554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17b558: 0x8e220004
    ctx->pc = 0x17b558u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17b55c: 0x14400005
    ctx->pc = 0x17B55Cu;
    {
        const bool branch_taken_0x17b55c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17B560u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        if (branch_taken_0x17b55c) {
            ctx->pc = 0x17B574u;
            goto label_17b574;
        }
    }
    ctx->pc = 0x17B564u;
    // 0x17b564: 0x3c050024
    ctx->pc = 0x17b564u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x17b568: 0xc05f386
    ctx->pc = 0x17B568u;
    SET_GPR_U32(ctx, 31, 0x17B570u);
    ctx->pc = 0x17B56Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 3632));
    ctx->pc = 0x17CE18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CE18_0x17ce18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B570u; }
    }
    if (ctx->pc != 0x17B570u) { return; }
    ctx->pc = 0x17B570u;
    // 0x17b570: 0xae220004
    ctx->pc = 0x17b570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_17b574:
    // 0x17b574: 0x24020002
    ctx->pc = 0x17b574u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b578: 0x12020011
    ctx->pc = 0x17B578u;
    {
        const bool branch_taken_0x17b578 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x17B57Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 3));
        if (branch_taken_0x17b578) {
            ctx->pc = 0x17B5C0u;
            goto label_17b5c0;
        }
    }
    ctx->pc = 0x17B580u;
    // 0x17b580: 0x10400019
    ctx->pc = 0x17B580u;
    {
        const bool branch_taken_0x17b580 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B584u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b580) {
            ctx->pc = 0x17B5E8u;
            goto label_17b5e8;
        }
    }
    ctx->pc = 0x17B588u;
    // 0x17b588: 0x24020001
    ctx->pc = 0x17b588u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b58c: 0x56020017
    ctx->pc = 0x17B58Cu;
    {
        const bool branch_taken_0x17b58c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x17b58c) {
            ctx->pc = 0x17B590u;
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->pc = 0x17B5ECu;
            goto label_17b5ec;
        }
    }
    ctx->pc = 0x17B594u;
    // 0x17b594: 0x220202d
    ctx->pc = 0x17b594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b598: 0xdfb10008
    ctx->pc = 0x17b598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b59c: 0x240282d
    ctx->pc = 0x17b59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b5a0: 0xdfb20010
    ctx->pc = 0x17b5a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b5a4: 0x260302d
    ctx->pc = 0x17b5a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b5a8: 0xdfb30018
    ctx->pc = 0x17b5a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b5ac: 0xdfb00000
    ctx->pc = 0x17b5acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b5b0: 0xdfbf0020
    ctx->pc = 0x17b5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b5b4: 0x805ed84
    ctx->pc = 0x17B5B4u;
    ctx->pc = 0x17B5B8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17B610u;
    goto label_17b610;
    ctx->pc = 0x17B5BCu;
    // 0x17b5bc: 0x0
    ctx->pc = 0x17b5bcu;
    // NOP
label_17b5c0:
    // 0x17b5c0: 0x220202d
    ctx->pc = 0x17b5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b5c4: 0xdfb10008
    ctx->pc = 0x17b5c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b5c8: 0x240282d
    ctx->pc = 0x17b5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b5cc: 0xdfb20010
    ctx->pc = 0x17b5ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b5d0: 0x260302d
    ctx->pc = 0x17b5d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b5d4: 0xdfb30018
    ctx->pc = 0x17b5d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b5d8: 0xdfb00000
    ctx->pc = 0x17b5d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b5dc: 0xdfbf0020
    ctx->pc = 0x17b5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b5e0: 0x805ee00
    ctx->pc = 0x17B5E0u;
    ctx->pc = 0x17B5E4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17B800u;
    goto label_17b800;
    ctx->pc = 0x17B5E8u;
label_17b5e8:
    // 0x17b5e8: 0xdfb10008
    ctx->pc = 0x17b5e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17b5ec:
    // 0x17b5ec: 0x240282d
    ctx->pc = 0x17b5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b5f0: 0xdfb20010
    ctx->pc = 0x17b5f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b5f4: 0x3c060024
    ctx->pc = 0x17b5f4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x17b5f8: 0xdfb00000
    ctx->pc = 0x17b5f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b5fc: 0xdfb30018
    ctx->pc = 0x17b5fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b600: 0x24c60ed0
    ctx->pc = 0x17b600u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3792));
    // 0x17b604: 0xdfbf0020
    ctx->pc = 0x17b604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b608: 0x805f472
    ctx->pc = 0x17B608u;
    ctx->pc = 0x17B60Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17D1C8u;
    sub_0017D1C8_0x17d1c8(rdram, ctx, runtime); return;
    ctx->pc = 0x17B610u;
label_17b610:
    // 0x17b610: 0x27bdffe0
    ctx->pc = 0x17b610u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b614: 0x24020041
    ctx->pc = 0x17b614u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 65));
    // 0x17b618: 0xffb00000
    ctx->pc = 0x17b618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b61c: 0x80802d
    ctx->pc = 0x17b61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b620: 0xffb10008
    ctx->pc = 0x17b620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17b624: 0xa0882d
    ctx->pc = 0x17b624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b628: 0xffb20010
    ctx->pc = 0x17b628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17b62c: 0xffbf0018
    ctx->pc = 0x17b62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17b630: 0x8e030004
    ctx->pc = 0x17b630u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17b634: 0x10620050
    ctx->pc = 0x17B634u;
    {
        const bool branch_taken_0x17b634 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17B638u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b634) {
            ctx->pc = 0x17B778u;
            goto label_17b778;
        }
    }
    ctx->pc = 0x17B63Cu;
    // 0x17b63c: 0x28620042
    ctx->pc = 0x17b63cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 66));
    // 0x17b640: 0x1040000f
    ctx->pc = 0x17B640u;
    {
        const bool branch_taken_0x17b640 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B644u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 257));
        if (branch_taken_0x17b640) {
            ctx->pc = 0x17B680u;
            goto label_17b680;
        }
    }
    ctx->pc = 0x17B648u;
    // 0x17b648: 0x24020021
    ctx->pc = 0x17b648u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 33));
    // 0x17b64c: 0x10620056
    ctx->pc = 0x17B64Cu;
    {
        const bool branch_taken_0x17b64c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17B650u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 34));
        if (branch_taken_0x17b64c) {
            ctx->pc = 0x17B7A8u;
            goto label_17b7a8;
        }
    }
    ctx->pc = 0x17B654u;
    // 0x17b654: 0x10400006
    ctx->pc = 0x17B654u;
    {
        const bool branch_taken_0x17b654 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B658u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
        if (branch_taken_0x17b654) {
            ctx->pc = 0x17B670u;
            goto label_17b670;
        }
    }
    ctx->pc = 0x17B65Cu;
    // 0x17b65c: 0x24020011
    ctx->pc = 0x17b65cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
    // 0x17b660: 0x10620011
    ctx->pc = 0x17B660u;
    {
        const bool branch_taken_0x17b660 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x17b660) {
            ctx->pc = 0x17B6A8u;
            goto label_17b6a8;
        }
    }
    ctx->pc = 0x17B668u;
    // 0x17b668: 0x1000005c
    ctx->pc = 0x17B668u;
    {
        const bool branch_taken_0x17b668 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B66Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b668) {
            ctx->pc = 0x17B7DCu;
            goto label_17b7dc;
        }
    }
    ctx->pc = 0x17B670u;
label_17b670:
    // 0x17b670: 0x10620035
    ctx->pc = 0x17B670u;
    {
        const bool branch_taken_0x17b670 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x17b670) {
            ctx->pc = 0x17B748u;
            goto label_17b748;
        }
    }
    ctx->pc = 0x17B678u;
    // 0x17b678: 0x10000058
    ctx->pc = 0x17B678u;
    {
        const bool branch_taken_0x17b678 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B67Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b678) {
            ctx->pc = 0x17B7DCu;
            goto label_17b7dc;
        }
    }
    ctx->pc = 0x17B680u;
label_17b680:
    // 0x17b680: 0x10620055
    ctx->pc = 0x17B680u;
    {
        const bool branch_taken_0x17b680 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17B684u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 258));
        if (branch_taken_0x17b680) {
            ctx->pc = 0x17B7D8u;
            goto label_17b7d8;
        }
    }
    ctx->pc = 0x17B688u;
    // 0x17b688: 0x54400054
    ctx->pc = 0x17B688u;
    {
        const bool branch_taken_0x17b688 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17b688) {
            ctx->pc = 0x17B68Cu;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x17B7DCu;
            goto label_17b7dc;
        }
    }
    ctx->pc = 0x17B690u;
    // 0x17b690: 0x24021001
    ctx->pc = 0x17b690u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4097));
    // 0x17b694: 0x10620020
    ctx->pc = 0x17B694u;
    {
        const bool branch_taken_0x17b694 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x17b694) {
            ctx->pc = 0x17B718u;
            goto label_17b718;
        }
    }
    ctx->pc = 0x17B69Cu;
    // 0x17b69c: 0x1000004f
    ctx->pc = 0x17B69Cu;
    {
        const bool branch_taken_0x17b69c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B6A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b69c) {
            ctx->pc = 0x17B7DCu;
            goto label_17b7dc;
        }
    }
    ctx->pc = 0x17B6A4u;
    // 0x17b6a4: 0x0
    ctx->pc = 0x17b6a4u;
    // NOP
label_17b6a8:
    // 0x17b6a8: 0xc05f51a
    ctx->pc = 0x17B6A8u;
    SET_GPR_U32(ctx, 31, 0x17B6B0u);
    ctx->pc = 0x17D468u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D468_0x17d468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B6B0u; }
    }
    if (ctx->pc != 0x17B6B0u) { return; }
    ctx->pc = 0x17B6B0u;
    // 0x17b6b0: 0x24030001
    ctx->pc = 0x17b6b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b6b4: 0x1043000a
    ctx->pc = 0x17B6B4u;
    {
        const bool branch_taken_0x17b6b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x17B6B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b6b4) {
            ctx->pc = 0x17B6E0u;
            goto label_17b6e0;
        }
    }
    ctx->pc = 0x17B6BCu;
    // 0x17b6bc: 0xdfb00000
    ctx->pc = 0x17b6bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b6c0: 0x220282d
    ctx->pc = 0x17b6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6c4: 0xdfb10008
    ctx->pc = 0x17b6c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b6c8: 0x240302d
    ctx->pc = 0x17b6c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6cc: 0xdfb20010
    ctx->pc = 0x17b6ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b6d0: 0xdfbf0018
    ctx->pc = 0x17b6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b6d4: 0x382d
    ctx->pc = 0x17b6d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6d8: 0x805ee22
    ctx->pc = 0x17B6D8u;
    ctx->pc = 0x17B6DCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17B888u;
    goto label_17b888;
    ctx->pc = 0x17B6E0u;
label_17b6e0:
    // 0x17b6e0: 0x220282d
    ctx->pc = 0x17b6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6e4: 0xc05f164
    ctx->pc = 0x17B6E4u;
    SET_GPR_U32(ctx, 31, 0x17B6ECu);
    ctx->pc = 0x17B6E8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 21));
    ctx->pc = 0x17C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C590_0x17c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B6ECu; }
    }
    if (ctx->pc != 0x17B6ECu) { return; }
    ctx->pc = 0x17B6ECu;
    // 0x17b6ec: 0x200202d
    ctx->pc = 0x17b6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6f0: 0x220282d
    ctx->pc = 0x17b6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6f4: 0xdfb10008
    ctx->pc = 0x17b6f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b6f8: 0x240302d
    ctx->pc = 0x17b6f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6fc: 0xdfb20010
    ctx->pc = 0x17b6fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b700: 0xdfb00000
    ctx->pc = 0x17b700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b704: 0x24070001
    ctx->pc = 0x17b704u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b708: 0xdfbf0018
    ctx->pc = 0x17b708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b70c: 0x805ee22
    ctx->pc = 0x17B70Cu;
    ctx->pc = 0x17B710u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17B888u;
    goto label_17b888;
    ctx->pc = 0x17B714u;
    // 0x17b714: 0x0
    ctx->pc = 0x17b714u;
    // NOP
label_17b718:
    // 0x17b718: 0xc05f164
    ctx->pc = 0x17B718u;
    SET_GPR_U32(ctx, 31, 0x17B720u);
    ctx->pc = 0x17B71Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 21));
    ctx->pc = 0x17C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C590_0x17c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B720u; }
    }
    if (ctx->pc != 0x17B720u) { return; }
    ctx->pc = 0x17B720u;
    // 0x17b720: 0x200202d
    ctx->pc = 0x17b720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b724: 0x220282d
    ctx->pc = 0x17b724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b728: 0xdfb10008
    ctx->pc = 0x17b728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b72c: 0x240302d
    ctx->pc = 0x17b72cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b730: 0xdfb20010
    ctx->pc = 0x17b730u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b734: 0xdfb00000
    ctx->pc = 0x17b734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b738: 0x24070001
    ctx->pc = 0x17b738u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b73c: 0xdfbf0018
    ctx->pc = 0x17b73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b740: 0x805ee22
    ctx->pc = 0x17B740u;
    ctx->pc = 0x17B744u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17B888u;
    goto label_17b888;
    ctx->pc = 0x17B748u;
label_17b748:
    // 0x17b748: 0xc05f164
    ctx->pc = 0x17B748u;
    SET_GPR_U32(ctx, 31, 0x17B750u);
    ctx->pc = 0x17B74Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x17C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C590_0x17c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B750u; }
    }
    if (ctx->pc != 0x17B750u) { return; }
    ctx->pc = 0x17B750u;
    // 0x17b750: 0x200202d
    ctx->pc = 0x17b750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b754: 0x220282d
    ctx->pc = 0x17b754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b758: 0xdfb10008
    ctx->pc = 0x17b758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b75c: 0x240302d
    ctx->pc = 0x17b75cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b760: 0xdfb20010
    ctx->pc = 0x17b760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b764: 0xdfb00000
    ctx->pc = 0x17b764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b768: 0x24070001
    ctx->pc = 0x17b768u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b76c: 0xdfbf0018
    ctx->pc = 0x17b76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b770: 0x805ee22
    ctx->pc = 0x17B770u;
    ctx->pc = 0x17B774u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17B888u;
    goto label_17b888;
    ctx->pc = 0x17B778u;
label_17b778:
    // 0x17b778: 0xc05f164
    ctx->pc = 0x17B778u;
    SET_GPR_U32(ctx, 31, 0x17B780u);
    ctx->pc = 0x17B77Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x17C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C590_0x17c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B780u; }
    }
    if (ctx->pc != 0x17B780u) { return; }
    ctx->pc = 0x17B780u;
    // 0x17b780: 0x200202d
    ctx->pc = 0x17b780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b784: 0x220282d
    ctx->pc = 0x17b784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b788: 0xdfb10008
    ctx->pc = 0x17b788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b78c: 0x240302d
    ctx->pc = 0x17b78cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b790: 0xdfb20010
    ctx->pc = 0x17b790u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b794: 0xdfb00000
    ctx->pc = 0x17b794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b798: 0x24070001
    ctx->pc = 0x17b798u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b79c: 0xdfbf0018
    ctx->pc = 0x17b79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b7a0: 0x805ee22
    ctx->pc = 0x17B7A0u;
    ctx->pc = 0x17B7A4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17B888u;
    goto label_17b888;
    ctx->pc = 0x17B7A8u;
label_17b7a8:
    // 0x17b7a8: 0xc05f164
    ctx->pc = 0x17B7A8u;
    SET_GPR_U32(ctx, 31, 0x17B7B0u);
    ctx->pc = 0x17B7ACu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x17C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C590_0x17c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B7B0u; }
    }
    if (ctx->pc != 0x17B7B0u) { return; }
    ctx->pc = 0x17B7B0u;
    // 0x17b7b0: 0x200202d
    ctx->pc = 0x17b7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b7b4: 0x220282d
    ctx->pc = 0x17b7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b7b8: 0xdfb10008
    ctx->pc = 0x17b7b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b7bc: 0x240302d
    ctx->pc = 0x17b7bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b7c0: 0xdfb20010
    ctx->pc = 0x17b7c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b7c4: 0xdfb00000
    ctx->pc = 0x17b7c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b7c8: 0xdfbf0018
    ctx->pc = 0x17b7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b7cc: 0x805ee58
    ctx->pc = 0x17B7CCu;
    ctx->pc = 0x17B7D0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17B960u;
    goto label_17b960;
    ctx->pc = 0x17B7D4u;
    // 0x17b7d4: 0x0
    ctx->pc = 0x17b7d4u;
    // NOP
label_17b7d8:
    // 0x17b7d8: 0x200202d
    ctx->pc = 0x17b7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b7dc:
    // 0x17b7dc: 0xdfb00000
    ctx->pc = 0x17b7dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b7e0: 0x220282d
    ctx->pc = 0x17b7e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b7e4: 0xdfb10008
    ctx->pc = 0x17b7e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b7e8: 0x3c060024
    ctx->pc = 0x17b7e8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x17b7ec: 0xdfb20010
    ctx->pc = 0x17b7ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b7f0: 0xdfbf0018
    ctx->pc = 0x17b7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b7f4: 0x24c60f08
    ctx->pc = 0x17b7f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3848));
    // 0x17b7f8: 0x805f472
    ctx->pc = 0x17B7F8u;
    ctx->pc = 0x17B7FCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17D1C8u;
    sub_0017D1C8_0x17d1c8(rdram, ctx, runtime); return;
    ctx->pc = 0x17B800u;
label_17b800:
    // 0x17b800: 0x27bdfff0
    ctx->pc = 0x17b800u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b804: 0x80382d
    ctx->pc = 0x17b804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b808: 0xffbf0000
    ctx->pc = 0x17b808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b80c: 0x24020041
    ctx->pc = 0x17b80cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 65));
    // 0x17b810: 0x8ce30004
    ctx->pc = 0x17b810u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x17b814: 0x10620012
    ctx->pc = 0x17B814u;
    {
        const bool branch_taken_0x17b814 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17B818u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b814) {
            ctx->pc = 0x17B860u;
            goto label_17b860;
        }
    }
    ctx->pc = 0x17B81Cu;
    // 0x17b81c: 0x28620042
    ctx->pc = 0x17b81cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 66));
    // 0x17b820: 0x50400010
    ctx->pc = 0x17B820u;
    {
        const bool branch_taken_0x17b820 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17b820) {
            ctx->pc = 0x17B824u;
            SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
            ctx->pc = 0x17B864u;
            goto label_17b864;
        }
    }
    ctx->pc = 0x17B828u;
    // 0x17b828: 0x24020021
    ctx->pc = 0x17b828u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 33));
    // 0x17b82c: 0x10620008
    ctx->pc = 0x17B82Cu;
    {
        const bool branch_taken_0x17b82c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17B830u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 34));
        if (branch_taken_0x17b82c) {
            ctx->pc = 0x17B850u;
            goto label_17b850;
        }
    }
    ctx->pc = 0x17B834u;
    // 0x17b834: 0x1040000b
    ctx->pc = 0x17B834u;
    {
        const bool branch_taken_0x17b834 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B838u;
        SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
        if (branch_taken_0x17b834) {
            ctx->pc = 0x17B864u;
            goto label_17b864;
        }
    }
    ctx->pc = 0x17B83Cu;
    // 0x17b83c: 0x24020011
    ctx->pc = 0x17b83cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
    // 0x17b840: 0x1062000f
    ctx->pc = 0x17B840u;
    {
        const bool branch_taken_0x17b840 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17B844u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x17b840) {
            ctx->pc = 0x17B880u;
            goto label_17b880;
        }
    }
    ctx->pc = 0x17B848u;
    // 0x17b848: 0x10000007
    ctx->pc = 0x17B848u;
    {
        const bool branch_taken_0x17b848 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17b848) {
            ctx->pc = 0x17B868u;
            goto label_17b868;
        }
    }
    ctx->pc = 0x17B850u;
label_17b850:
    // 0x17b850: 0xdfbf0000
    ctx->pc = 0x17b850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b854: 0x805ed3a
    ctx->pc = 0x17B854u;
    ctx->pc = 0x17B858u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17B4E8u;
    entry_17b4e8_0x17b530(rdram, ctx, runtime); return;
    ctx->pc = 0x17B85Cu;
    // 0x17b85c: 0x0
    ctx->pc = 0x17b85cu;
    // NOP
label_17b860:
    // 0x17b860: 0x3c060024
    ctx->pc = 0x17b860u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
label_17b864:
    // 0x17b864: 0xdfbf0000
    ctx->pc = 0x17b864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17b868:
    // 0x17b868: 0xe0202d
    ctx->pc = 0x17b868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b86c: 0x100282d
    ctx->pc = 0x17b86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b870: 0x24c60f50
    ctx->pc = 0x17b870u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3920));
    // 0x17b874: 0x805f472
    ctx->pc = 0x17B874u;
    ctx->pc = 0x17B878u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D1C8u;
    sub_0017D1C8_0x17d1c8(rdram, ctx, runtime); return;
    ctx->pc = 0x17B87Cu;
    // 0x17b87c: 0x0
    ctx->pc = 0x17b87cu;
    // NOP
label_17b880:
    // 0x17b880: 0x3e00008
    ctx->pc = 0x17B880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B884u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B574u: goto label_17b574;
            case 0x17B5C0u: goto label_17b5c0;
            case 0x17B5E8u: goto label_17b5e8;
            case 0x17B5ECu: goto label_17b5ec;
            case 0x17B610u: goto label_17b610;
            case 0x17B670u: goto label_17b670;
            case 0x17B680u: goto label_17b680;
            case 0x17B6A8u: goto label_17b6a8;
            case 0x17B6E0u: goto label_17b6e0;
            case 0x17B718u: goto label_17b718;
            case 0x17B748u: goto label_17b748;
            case 0x17B778u: goto label_17b778;
            case 0x17B7A8u: goto label_17b7a8;
            case 0x17B7D8u: goto label_17b7d8;
            case 0x17B7DCu: goto label_17b7dc;
            case 0x17B800u: goto label_17b800;
            case 0x17B850u: goto label_17b850;
            case 0x17B860u: goto label_17b860;
            case 0x17B864u: goto label_17b864;
            case 0x17B868u: goto label_17b868;
            case 0x17B880u: goto label_17b880;
            case 0x17B888u: goto label_17b888;
            case 0x17B900u: goto label_17b900;
            case 0x17B904u: goto label_17b904;
            case 0x17B91Cu: goto label_17b91c;
            case 0x17B938u: goto label_17b938;
            case 0x17B948u: goto label_17b948;
            case 0x17B960u: goto label_17b960;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B888u;
label_17b888:
    // 0x17b888: 0x27bdffa0
    ctx->pc = 0x17b888u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17b88c: 0xffb00030
    ctx->pc = 0x17b88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x17b890: 0xa0802d
    ctx->pc = 0x17b890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b894: 0xffb10038
    ctx->pc = 0x17b894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x17b898: 0x26110004
    ctx->pc = 0x17b898u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 4));
    // 0x17b89c: 0xffb20040
    ctx->pc = 0x17b89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x17b8a0: 0x80902d
    ctx->pc = 0x17b8a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b8a4: 0xffb30048
    ctx->pc = 0x17b8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x17b8a8: 0xe0982d
    ctx->pc = 0x17b8a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b8ac: 0xffbf0050
    ctx->pc = 0x17b8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17b8b0: 0xafa60010
    ctx->pc = 0x17b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x17b8b4: 0x8e050044
    ctx->pc = 0x17b8b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x17b8b8: 0x8e020048
    ctx->pc = 0x17b8b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17b8bc: 0x8e230000
    ctx->pc = 0x17b8bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17b8c0: 0xafa50014
    ctx->pc = 0x17b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x17b8c4: 0xafa30000
    ctx->pc = 0x17b8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x17b8c8: 0xafa50004
    ctx->pc = 0x17b8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x17b8cc: 0xc05eb6a
    ctx->pc = 0x17B8CCu;
    SET_GPR_U32(ctx, 31, 0x17B8D4u);
    ctx->pc = 0x17B8D0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x17ADA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017ADA8_0x17ada8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B8D4u; }
    }
    if (ctx->pc != 0x17B8D4u) { return; }
    ctx->pc = 0x17B8D4u;
    // 0x17b8d4: 0x24030001
    ctx->pc = 0x17b8d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b8d8: 0x3a0202d
    ctx->pc = 0x17b8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b8dc: 0x27a50010
    ctx->pc = 0x17b8dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x17b8e0: 0x14430007
    ctx->pc = 0x17B8E0u;
    {
        const bool branch_taken_0x17b8e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x17B8E4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17b8e0) {
            ctx->pc = 0x17B900u;
            goto label_17b900;
        }
    }
    ctx->pc = 0x17B8E8u;
    // 0x17b8e8: 0x8e020048
    ctx->pc = 0x17b8e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17b8ec: 0x21fc2
    ctx->pc = 0x17b8ecu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x17b8f0: 0x431021
    ctx->pc = 0x17b8f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17b8f4: 0x10000003
    ctx->pc = 0x17B8F4u;
    {
        const bool branch_taken_0x17b8f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B8F8u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x17b8f4) {
            ctx->pc = 0x17B904u;
            goto label_17b904;
        }
    }
    ctx->pc = 0x17B8FCu;
    // 0x17b8fc: 0x0
    ctx->pc = 0x17b8fcu;
    // NOP
label_17b900:
    // 0x17b900: 0x8e020048
    ctx->pc = 0x17b900u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_17b904:
    // 0x17b904: 0xafa20018
    ctx->pc = 0x17b904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x17b908: 0x8e420008
    ctx->pc = 0x17b908u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x17b90c: 0x14400003
    ctx->pc = 0x17B90Cu;
    {
        const bool branch_taken_0x17b90c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17b90c) {
            ctx->pc = 0x17B91Cu;
            goto label_17b91c;
        }
    }
    ctx->pc = 0x17B914u;
    // 0x17b914: 0x8e220004
    ctx->pc = 0x17b914u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17b918: 0x21080
    ctx->pc = 0x17b918u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_17b91c:
    // 0x17b91c: 0x16660006
    ctx->pc = 0x17B91Cu;
    {
        const bool branch_taken_0x17b91c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 6));
        ctx->pc = 0x17B920u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        if (branch_taken_0x17b91c) {
            ctx->pc = 0x17B938u;
            goto label_17b938;
        }
    }
    ctx->pc = 0x17B924u;
    // 0x17b924: 0xc053db4
    ctx->pc = 0x17B924u;
    SET_GPR_U32(ctx, 31, 0x17B92Cu);
    ctx->pc = 0x17B928u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 60)));
    ctx->pc = 0x14F6D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0014F6D0_0x14f6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B92Cu; }
    }
    if (ctx->pc != 0x17B92Cu) { return; }
    ctx->pc = 0x17B92Cu;
    // 0x17b92c: 0x10000006
    ctx->pc = 0x17B92Cu;
    {
        const bool branch_taken_0x17b92c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B930u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17b92c) {
            ctx->pc = 0x17B948u;
            goto label_17b948;
        }
    }
    ctx->pc = 0x17B934u;
    // 0x17b934: 0x0
    ctx->pc = 0x17b934u;
    // NOP
label_17b938:
    // 0x17b938: 0x3a0202d
    ctx->pc = 0x17b938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b93c: 0xc053dac
    ctx->pc = 0x17B93Cu;
    SET_GPR_U32(ctx, 31, 0x17B944u);
    ctx->pc = 0x17B940u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x14F6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0014F6B0_0x14f6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B944u; }
    }
    if (ctx->pc != 0x17B944u) { return; }
    ctx->pc = 0x17B944u;
    // 0x17b944: 0xdfb00030
    ctx->pc = 0x17b944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17b948:
    // 0x17b948: 0xdfb10038
    ctx->pc = 0x17b948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17b94c: 0xdfb20040
    ctx->pc = 0x17b94cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b950: 0xdfb30048
    ctx->pc = 0x17b950u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b954: 0xdfbf0050
    ctx->pc = 0x17b954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17b958: 0x3e00008
    ctx->pc = 0x17B958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B95Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B574u: goto label_17b574;
            case 0x17B5C0u: goto label_17b5c0;
            case 0x17B5E8u: goto label_17b5e8;
            case 0x17B5ECu: goto label_17b5ec;
            case 0x17B610u: goto label_17b610;
            case 0x17B670u: goto label_17b670;
            case 0x17B680u: goto label_17b680;
            case 0x17B6A8u: goto label_17b6a8;
            case 0x17B6E0u: goto label_17b6e0;
            case 0x17B718u: goto label_17b718;
            case 0x17B748u: goto label_17b748;
            case 0x17B778u: goto label_17b778;
            case 0x17B7A8u: goto label_17b7a8;
            case 0x17B7D8u: goto label_17b7d8;
            case 0x17B7DCu: goto label_17b7dc;
            case 0x17B800u: goto label_17b800;
            case 0x17B850u: goto label_17b850;
            case 0x17B860u: goto label_17b860;
            case 0x17B864u: goto label_17b864;
            case 0x17B868u: goto label_17b868;
            case 0x17B880u: goto label_17b880;
            case 0x17B888u: goto label_17b888;
            case 0x17B900u: goto label_17b900;
            case 0x17B904u: goto label_17b904;
            case 0x17B91Cu: goto label_17b91c;
            case 0x17B938u: goto label_17b938;
            case 0x17B948u: goto label_17b948;
            case 0x17B960u: goto label_17b960;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B960u;
label_17b960:
    // 0x17b960: 0x27bdffa0
    ctx->pc = 0x17b960u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17b964: 0xffb00030
    ctx->pc = 0x17b964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x17b968: 0xa0802d
    ctx->pc = 0x17b968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b96c: 0xffb10038
    ctx->pc = 0x17b96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x17b970: 0x26110004
    ctx->pc = 0x17b970u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 4));
    // 0x17b974: 0xffb20040
    ctx->pc = 0x17b974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x17b978: 0x27b20010
    ctx->pc = 0x17b978u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
    // 0x17b97c: 0xffb30048
    ctx->pc = 0x17b97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x17b980: 0xc0982d
    ctx->pc = 0x17b980u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b984: 0xffb40050
    ctx->pc = 0x17b984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x17b988: 0x80a02d
    ctx->pc = 0x17b988u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b98c: 0xffbf0058
    ctx->pc = 0x17b98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x17b990: 0x240282d
    ctx->pc = 0x17b990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b994: 0x3a0202d
    ctx->pc = 0x17b994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b998: 0x8e030048
    ctx->pc = 0x17b998u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17b99c: 0x8e070044
    ctx->pc = 0x17b99cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x17b9a0: 0x317c2
    ctx->pc = 0x17b9a0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 31));
    // 0x17b9a4: 0x8e260000
    ctx->pc = 0x17b9a4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17b9a8: 0x621021
    ctx->pc = 0x17b9a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17b9ac: 0xafa70014
    ctx->pc = 0x17b9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x17b9b0: 0x21043
    ctx->pc = 0x17b9b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17b9b4: 0xafa60000
    ctx->pc = 0x17b9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x17b9b8: 0xafa20018
    ctx->pc = 0x17b9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x17b9bc: 0xafa70004
    ctx->pc = 0x17b9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x17b9c0: 0xafa30008
    ctx->pc = 0x17b9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x17b9c4: 0xc053dac
    ctx->pc = 0x17B9C4u;
    SET_GPR_U32(ctx, 31, 0x17B9CCu);
    ctx->pc = 0x17B9C8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    ctx->pc = 0x14F6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0014F6B0_0x14f6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B9CCu; }
    }
    if (ctx->pc != 0x17B9CCu) { return; }
    ctx->pc = 0x17B9CCu;
    // 0x17b9cc: 0x8e070048
    ctx->pc = 0x17b9ccu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17b9d0: 0x3a0202d
    ctx->pc = 0x17b9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b9d4: 0x8e020044
    ctx->pc = 0x17b9d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x17b9d8: 0x240282d
    ctx->pc = 0x17b9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b9dc: 0x8e230000
    ctx->pc = 0x17b9dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17b9e0: 0x8e86003c
    ctx->pc = 0x17b9e0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x17b9e4: 0xafb30010
    ctx->pc = 0x17b9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x17b9e8: 0xafa30000
    ctx->pc = 0x17b9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x17b9ec: 0xafa20014
    ctx->pc = 0x17b9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x17b9f0: 0xafa70018
    ctx->pc = 0x17b9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x17b9f4: 0xafa20004
    ctx->pc = 0x17b9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x17b9f8: 0xc054044
    ctx->pc = 0x17B9F8u;
    SET_GPR_U32(ctx, 31, 0x17BA00u);
    ctx->pc = 0x17B9FCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    ctx->pc = 0x150110u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00150110_0x150110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BA00u; }
    }
    if (ctx->pc != 0x17BA00u) { return; }
    ctx->pc = 0x17BA00u;
    // 0x17ba00: 0xdfb00030
    ctx->pc = 0x17ba00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ba04: 0xdfb10038
    ctx->pc = 0x17ba04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17ba08: 0xdfb20040
    ctx->pc = 0x17ba08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ba0c: 0xdfb30048
    ctx->pc = 0x17ba0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17ba10: 0xdfb40050
    ctx->pc = 0x17ba10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ba14: 0xdfbf0058
    ctx->pc = 0x17ba14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17ba18: 0x3e00008
    ctx->pc = 0x17BA18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BA1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B574u: goto label_17b574;
            case 0x17B5C0u: goto label_17b5c0;
            case 0x17B5E8u: goto label_17b5e8;
            case 0x17B5ECu: goto label_17b5ec;
            case 0x17B610u: goto label_17b610;
            case 0x17B670u: goto label_17b670;
            case 0x17B680u: goto label_17b680;
            case 0x17B6A8u: goto label_17b6a8;
            case 0x17B6E0u: goto label_17b6e0;
            case 0x17B718u: goto label_17b718;
            case 0x17B748u: goto label_17b748;
            case 0x17B778u: goto label_17b778;
            case 0x17B7A8u: goto label_17b7a8;
            case 0x17B7D8u: goto label_17b7d8;
            case 0x17B7DCu: goto label_17b7dc;
            case 0x17B800u: goto label_17b800;
            case 0x17B850u: goto label_17b850;
            case 0x17B860u: goto label_17b860;
            case 0x17B864u: goto label_17b864;
            case 0x17B868u: goto label_17b868;
            case 0x17B880u: goto label_17b880;
            case 0x17B888u: goto label_17b888;
            case 0x17B900u: goto label_17b900;
            case 0x17B904u: goto label_17b904;
            case 0x17B91Cu: goto label_17b91c;
            case 0x17B938u: goto label_17b938;
            case 0x17B948u: goto label_17b948;
            case 0x17B960u: goto label_17b960;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17BA20u;
}
