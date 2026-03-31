#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001984D0
// Address: 0x1984d0 - 0x198a30
void sub_001984D0_0x1984d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1984d0u;

    // 0x1984d0: 0x27bdff50
    ctx->pc = 0x1984d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1984d4: 0x3c02002a
    ctx->pc = 0x1984d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)42 << 16));
    // 0x1984d8: 0xffbf0060
    ctx->pc = 0x1984d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1984dc: 0x24428680
    ctx->pc = 0x1984dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936192));
    // 0x1984e0: 0x7fb50050
    ctx->pc = 0x1984e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1984e4: 0x7fb40040
    ctx->pc = 0x1984e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1984e8: 0x7fb30030
    ctx->pc = 0x1984e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1984ec: 0x7fb20020
    ctx->pc = 0x1984ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1984f0: 0x7fb10010
    ctx->pc = 0x1984f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1984f4: 0x120902d
    ctx->pc = 0x1984f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1984f8: 0x140882d
    ctx->pc = 0x1984f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1984fc: 0x7fb00000
    ctx->pc = 0x1984fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x198500: 0x308affff
    ctx->pc = 0x198500u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 4), 65535));
    // 0x198504: 0x2549ffff
    ctx->pc = 0x198504u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x198508: 0x918c0
    ctx->pc = 0x198508u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 9), 3));
    // 0x19850c: 0x691823
    ctx->pc = 0x19850cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x198510: 0x318c0
    ctx->pc = 0x198510u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x198514: 0x15400003
    ctx->pc = 0x198514u;
    {
        const bool branch_taken_0x198514 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x198518u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x198514) {
            ctx->pc = 0x198524u;
            goto label_198524;
        }
    }
    ctx->pc = 0x19851Cu;
    // 0x19851c: 0x1000013a
    ctx->pc = 0x19851Cu;
    {
        const bool branch_taken_0x19851c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x198520u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19851c) {
            ctx->pc = 0x198A08u;
            goto label_198a08;
        }
    }
    ctx->pc = 0x198524u;
label_198524:
    // 0x198524: 0x86020014
    ctx->pc = 0x198524u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x198528: 0x14400003
    ctx->pc = 0x198528u;
    {
        const bool branch_taken_0x198528 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19852Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x198528) {
            ctx->pc = 0x198538u;
            goto label_198538;
        }
    }
    ctx->pc = 0x198530u;
    // 0x198530: 0x10000136
    ctx->pc = 0x198530u;
    {
        const bool branch_taken_0x198530 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x198534u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x198530) {
            ctx->pc = 0x198A0Cu;
            goto label_198a0c;
        }
    }
    ctx->pc = 0x198538u;
label_198538:
    // 0x198538: 0x82020035
    ctx->pc = 0x198538u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
    // 0x19853c: 0x14400003
    ctx->pc = 0x19853Cu;
    {
        const bool branch_taken_0x19853c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x198540u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19853c) {
            ctx->pc = 0x19854Cu;
            goto label_19854c;
        }
    }
    ctx->pc = 0x198544u;
    // 0x198544: 0x10000130
    ctx->pc = 0x198544u;
    {
        const bool branch_taken_0x198544 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x198544) {
            ctx->pc = 0x198A08u;
            goto label_198a08;
        }
    }
    ctx->pc = 0x19854Cu;
label_19854c:
    // 0x19854c: 0x8e020004
    ctx->pc = 0x19854cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x198550: 0x30420004
    ctx->pc = 0x198550u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x198554: 0x10400019
    ctx->pc = 0x198554u;
    {
        const bool branch_taken_0x198554 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x198558u;
        SET_GPR_U32(ctx, 2, ((uint32_t)192 << 16));
        if (branch_taken_0x198554) {
            ctx->pc = 0x1985BCu;
            goto label_1985bc;
        }
    }
    ctx->pc = 0x19855Cu;
    // 0x19855c: 0x3c02ffff
    ctx->pc = 0x19855cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x198560: 0x821024
    ctx->pc = 0x198560u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x198564: 0x21402
    ctx->pc = 0x198564u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 16));
    // 0x198568: 0x14400003
    ctx->pc = 0x198568u;
    {
        const bool branch_taken_0x198568 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19856Cu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x198568) {
            ctx->pc = 0x198578u;
            goto label_198578;
        }
    }
    ctx->pc = 0x198570u;
    // 0x198570: 0x10000125
    ctx->pc = 0x198570u;
    {
        const bool branch_taken_0x198570 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x198574u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x198570) {
            ctx->pc = 0x198A08u;
            goto label_198a08;
        }
    }
    ctx->pc = 0x198578u;
label_198578:
    // 0x198578: 0x918c0
    ctx->pc = 0x198578u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 9), 3));
    // 0x19857c: 0x3c020029
    ctx->pc = 0x19857cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x198580: 0x691823
    ctx->pc = 0x198580u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x198584: 0x24424e80
    ctx->pc = 0x198584u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20096));
    // 0x198588: 0x318c0
    ctx->pc = 0x198588u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x19858c: 0x431821
    ctx->pc = 0x19858cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198590: 0x84620014
    ctx->pc = 0x198590u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x198594: 0x14400003
    ctx->pc = 0x198594u;
    {
        const bool branch_taken_0x198594 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x198598u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x198594) {
            ctx->pc = 0x1985A4u;
            goto label_1985a4;
        }
    }
    ctx->pc = 0x19859Cu;
    // 0x19859c: 0x1000011a
    ctx->pc = 0x19859Cu;
    {
        const bool branch_taken_0x19859c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x19859c) {
            ctx->pc = 0x198A08u;
            goto label_198a08;
        }
    }
    ctx->pc = 0x1985A4u;
label_1985a4:
    // 0x1985a4: 0x80620035
    ctx->pc = 0x1985a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 53)));
    // 0x1985a8: 0x14400003
    ctx->pc = 0x1985A8u;
    {
        const bool branch_taken_0x1985a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1985ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1985a8) {
            ctx->pc = 0x1985B8u;
            goto label_1985b8;
        }
    }
    ctx->pc = 0x1985B0u;
    // 0x1985b0: 0x10000115
    ctx->pc = 0x1985B0u;
    {
        const bool branch_taken_0x1985b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1985b0) {
            ctx->pc = 0x198A08u;
            goto label_198a08;
        }
    }
    ctx->pc = 0x1985B8u;
label_1985b8:
    // 0x1985b8: 0x3c0200c0
    ctx->pc = 0x1985b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)192 << 16));
label_1985bc:
    // 0x1985bc: 0x1621824
    ctx->pc = 0x1985bcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1985c0: 0x10600005
    ctx->pc = 0x1985C0u;
    {
        const bool branch_taken_0x1985c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1985c0) {
            ctx->pc = 0x1985D8u;
            goto label_1985d8;
        }
    }
    ctx->pc = 0x1985C8u;
    // 0x1985c8: 0x8e090030
    ctx->pc = 0x1985c8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1985cc: 0x24020001
    ctx->pc = 0x1985ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1985d0: 0x15220009
    ctx->pc = 0x1985D0u;
    {
        const bool branch_taken_0x1985d0 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 2));
        ctx->pc = 0x1985D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
        if (branch_taken_0x1985d0) {
            ctx->pc = 0x1985F8u;
            goto label_1985f8;
        }
    }
    ctx->pc = 0x1985D8u;
label_1985d8:
    // 0x1985d8: 0x3c030001
    ctx->pc = 0x1985d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x1985dc: 0x1631024
    ctx->pc = 0x1985dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1985e0: 0x14430003
    ctx->pc = 0x1985E0u;
    {
        const bool branch_taken_0x1985e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1985E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 96));
        if (branch_taken_0x1985e0) {
            ctx->pc = 0x1985F0u;
            goto label_1985f0;
        }
    }
    ctx->pc = 0x1985E8u;
    // 0x1985e8: 0x1000004e
    ctx->pc = 0x1985E8u;
    {
        const bool branch_taken_0x1985e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1985ECu;
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 0));
        if (branch_taken_0x1985e8) {
            ctx->pc = 0x198724u;
            goto label_198724;
        }
    }
    ctx->pc = 0x1985F0u;
label_1985f0:
    // 0x1985f0: 0x1000004c
    ctx->pc = 0x1985F0u;
    {
        const bool branch_taken_0x1985f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1985F4u;
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
        if (branch_taken_0x1985f0) {
            ctx->pc = 0x198724u;
            goto label_198724;
        }
    }
    ctx->pc = 0x1985F8u;
label_1985f8:
    // 0x1985f8: 0x14620026
    ctx->pc = 0x1985F8u;
    {
        const bool branch_taken_0x1985f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1985f8) {
            ctx->pc = 0x198694u;
            goto label_198694;
        }
    }
    ctx->pc = 0x198600u;
    // 0x198600: 0x3c030001
    ctx->pc = 0x198600u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x198604: 0x1631024
    ctx->pc = 0x198604u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x198608: 0x14430012
    ctx->pc = 0x198608u;
    {
        const bool branch_taken_0x198608 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x19860Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
        if (branch_taken_0x198608) {
            ctx->pc = 0x198654u;
            goto label_198654;
        }
    }
    ctx->pc = 0x198610u;
    // 0x198610: 0x3c010029
    ctx->pc = 0x198610u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x198614: 0x2522ffff
    ctx->pc = 0x198614u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x198618: 0x9c234e70
    ctx->pc = 0x198618u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 20080)));
    // 0x19861c: 0x2483c
    ctx->pc = 0x19861cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
    // 0x198620: 0x9483e
    ctx->pc = 0x198620u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x198624: 0x948b8
    ctx->pc = 0x198624u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 2);
    // 0x198628: 0x35290080
    ctx->pc = 0x198628u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 128));
    // 0x19862c: 0x3c010029
    ctx->pc = 0x19862cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x198630: 0x31cf8
    ctx->pc = 0x198630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x198634: 0x8c224e68
    ctx->pc = 0x198634u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 20072)));
    // 0x198638: 0x1231825
    ctx->pc = 0x198638u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x19863c: 0x21100
    ctx->pc = 0x19863cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x198640: 0x30420fff
    ctx->pc = 0x198640u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
    // 0x198644: 0x2103c
    ctx->pc = 0x198644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x198648: 0x431025
    ctx->pc = 0x198648u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19864c: 0x10000035
    ctx->pc = 0x19864Cu;
    {
        const bool branch_taken_0x19864c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x198650u;
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
        if (branch_taken_0x19864c) {
            ctx->pc = 0x198724u;
            goto label_198724;
        }
    }
    ctx->pc = 0x198654u;
label_198654:
    // 0x198654: 0x2522ffff
    ctx->pc = 0x198654u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x198658: 0x9c234e70
    ctx->pc = 0x198658u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 20080)));
    // 0x19865c: 0x2483c
    ctx->pc = 0x19865cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
    // 0x198660: 0x9483e
    ctx->pc = 0x198660u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x198664: 0x948b8
    ctx->pc = 0x198664u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 2);
    // 0x198668: 0x35290120
    ctx->pc = 0x198668u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 288));
    // 0x19866c: 0x3c010029
    ctx->pc = 0x19866cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x198670: 0x31cf8
    ctx->pc = 0x198670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x198674: 0x8c224e68
    ctx->pc = 0x198674u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 20072)));
    // 0x198678: 0x1231825
    ctx->pc = 0x198678u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x19867c: 0x21100
    ctx->pc = 0x19867cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x198680: 0x30420fff
    ctx->pc = 0x198680u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
    // 0x198684: 0x2103c
    ctx->pc = 0x198684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x198688: 0x431025
    ctx->pc = 0x198688u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19868c: 0x10000025
    ctx->pc = 0x19868Cu;
    {
        const bool branch_taken_0x19868c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x198690u;
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
        if (branch_taken_0x19868c) {
            ctx->pc = 0x198724u;
            goto label_198724;
        }
    }
    ctx->pc = 0x198694u;
label_198694:
    // 0x198694: 0x3c030001
    ctx->pc = 0x198694u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x198698: 0x1631024
    ctx->pc = 0x198698u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x19869c: 0x14430012
    ctx->pc = 0x19869Cu;
    {
        const bool branch_taken_0x19869c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1986A0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
        if (branch_taken_0x19869c) {
            ctx->pc = 0x1986E8u;
            goto label_1986e8;
        }
    }
    ctx->pc = 0x1986A4u;
    // 0x1986a4: 0x3c010029
    ctx->pc = 0x1986a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x1986a8: 0x2522ffff
    ctx->pc = 0x1986a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1986ac: 0x9c234e70
    ctx->pc = 0x1986acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 20080)));
    // 0x1986b0: 0x2483c
    ctx->pc = 0x1986b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1986b4: 0x9483e
    ctx->pc = 0x1986b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x1986b8: 0x948b8
    ctx->pc = 0x1986b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 2);
    // 0x1986bc: 0x352900c0
    ctx->pc = 0x1986bcu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 192));
    // 0x1986c0: 0x3c010029
    ctx->pc = 0x1986c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x1986c4: 0x31cf8
    ctx->pc = 0x1986c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x1986c8: 0x8c224e68
    ctx->pc = 0x1986c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 20072)));
    // 0x1986cc: 0x1231825
    ctx->pc = 0x1986ccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1986d0: 0x21100
    ctx->pc = 0x1986d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1986d4: 0x30420fff
    ctx->pc = 0x1986d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
    // 0x1986d8: 0x2103c
    ctx->pc = 0x1986d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1986dc: 0x431025
    ctx->pc = 0x1986dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1986e0: 0x10000010
    ctx->pc = 0x1986E0u;
    {
        const bool branch_taken_0x1986e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1986E4u;
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
        if (branch_taken_0x1986e0) {
            ctx->pc = 0x198724u;
            goto label_198724;
        }
    }
    ctx->pc = 0x1986E8u;
label_1986e8:
    // 0x1986e8: 0x2522ffff
    ctx->pc = 0x1986e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1986ec: 0x9c234e70
    ctx->pc = 0x1986ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 20080)));
    // 0x1986f0: 0x2483c
    ctx->pc = 0x1986f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1986f4: 0x9483e
    ctx->pc = 0x1986f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x1986f8: 0x948b8
    ctx->pc = 0x1986f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 2);
    // 0x1986fc: 0x35290160
    ctx->pc = 0x1986fcu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 352));
    // 0x198700: 0x3c010029
    ctx->pc = 0x198700u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x198704: 0x31cf8
    ctx->pc = 0x198704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x198708: 0x8c224e68
    ctx->pc = 0x198708u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 20072)));
    // 0x19870c: 0x1231825
    ctx->pc = 0x19870cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x198710: 0x21100
    ctx->pc = 0x198710u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x198714: 0x30420fff
    ctx->pc = 0x198714u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
    // 0x198718: 0x2103c
    ctx->pc = 0x198718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x19871c: 0x431025
    ctx->pc = 0x19871cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198720: 0xfcc20000
    ctx->pc = 0x198720u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_198724:
    // 0x198724: 0x8603001a
    ctx->pc = 0x198724u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x198728: 0x4610003
    ctx->pc = 0x198728u;
    {
        const bool branch_taken_0x198728 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x19872Cu;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        if (branch_taken_0x198728) {
            ctx->pc = 0x198738u;
            goto label_198738;
        }
    }
    ctx->pc = 0x198730u;
    // 0x198730: 0x2462003f
    ctx->pc = 0x198730u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 63));
    // 0x198734: 0x21183
    ctx->pc = 0x198734u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_198738:
    // 0x198738: 0x21c3c
    ctx->pc = 0x198738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19873c: 0x31c3f
    ctx->pc = 0x19873cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x198740: 0x14600002
    ctx->pc = 0x198740u;
    {
        const bool branch_taken_0x198740 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x198740) {
            ctx->pc = 0x19874Cu;
            goto label_19874c;
        }
    }
    ctx->pc = 0x198748u;
    // 0x198748: 0x24030001
    ctx->pc = 0x198748u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_19874c:
    // 0x19874c: 0x8e020004
    ctx->pc = 0x19874cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x198750: 0x30420004
    ctx->pc = 0x198750u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x198754: 0x10400032
    ctx->pc = 0x198754u;
    {
        const bool branch_taken_0x198754 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x198758u;
        SET_GPR_U32(ctx, 6, ((uint32_t)65535 << 16));
        if (branch_taken_0x198754) {
            ctx->pc = 0x198820u;
            goto label_198820;
        }
    }
    ctx->pc = 0x19875Cu;
    // 0x19875c: 0x3c020029
    ctx->pc = 0x19875cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x198760: 0x863024
    ctx->pc = 0x198760u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x198764: 0x24424e80
    ctx->pc = 0x198764u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20096));
    // 0x198768: 0x63402
    ctx->pc = 0x198768u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 6), 16));
    // 0x19876c: 0x24040003
    ctx->pc = 0x19876cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x198770: 0x24c9ffff
    ctx->pc = 0x198770u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x198774: 0x930c0
    ctx->pc = 0x198774u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 9), 3));
    // 0x198778: 0xc93023
    ctx->pc = 0x198778u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x19877c: 0x630c0
    ctx->pc = 0x19877cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 3));
    // 0x198780: 0x461021
    ctx->pc = 0x198780u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x198784: 0x8c46000c
    ctx->pc = 0x198784u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x198788: 0x14c40006
    ctx->pc = 0x198788u;
    {
        const bool branch_taken_0x198788 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 4));
        if (branch_taken_0x198788) {
            ctx->pc = 0x1987A4u;
            goto label_1987a4;
        }
    }
    ctx->pc = 0x198790u;
    // 0x198790: 0x24060080
    ctx->pc = 0x198790u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 128));
    // 0x198794: 0x6203c
    ctx->pc = 0x198794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x198798: 0xc42025
    ctx->pc = 0x198798u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x19879c: 0x10000004
    ctx->pc = 0x19879Cu;
    {
        const bool branch_taken_0x19879c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1987A0u;
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
        if (branch_taken_0x19879c) {
            ctx->pc = 0x1987B0u;
            goto label_1987b0;
        }
    }
    ctx->pc = 0x1987A4u;
label_1987a4:
    // 0x1987a4: 0x24040080
    ctx->pc = 0x1987a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 128));
    // 0x1987a8: 0x4203c
    ctx->pc = 0x1987a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1987ac: 0xfca40000
    ctx->pc = 0x1987acu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
label_1987b0:
    // 0x1987b0: 0x31c3c
    ctx->pc = 0x1987b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1987b4: 0x84450014
    ctx->pc = 0x1987b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1987b8: 0x31c3f
    ctx->pc = 0x1987b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1987bc: 0x9c440020
    ctx->pc = 0x1987bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1987c0: 0x36bb8
    ctx->pc = 0x1987c0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) << 14);
    // 0x1987c4: 0x860e0014
    ctx->pc = 0x1987c4u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1987c8: 0x24030004
    ctx->pc = 0x1987c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1987cc: 0x9e0c0020
    ctx->pc = 0x1987ccu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1987d0: 0x3303c
    ctx->pc = 0x1987d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1987d4: 0x860a0016
    ctx->pc = 0x1987d4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x1987d8: 0x3c034000
    ctx->pc = 0x1987d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
    // 0x1987dc: 0x86090018
    ctx->pc = 0x1987dcu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1987e0: 0x5297c
    ctx->pc = 0x1987e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 5));
    // 0x1987e4: 0x3103c
    ctx->pc = 0x1987e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1987e8: 0x1cd6825
    ctx->pc = 0x1987e8u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1987ec: 0xc1d38
    ctx->pc = 0x1987ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << 20);
    // 0x1987f0: 0x6d6025
    ctx->pc = 0x1987f0u;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x1987f4: 0xa1eb8
    ctx->pc = 0x1987f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << 26);
    // 0x1987f8: 0x6c5025
    ctx->pc = 0x1987f8u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1987fc: 0x91fb8
    ctx->pc = 0x1987fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << 30);
    // 0x198800: 0x6a1825
    ctx->pc = 0x198800u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x198804: 0x663025
    ctx->pc = 0x198804u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x198808: 0x41cfc
    ctx->pc = 0x198808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 19));
    // 0x19880c: 0xa62025
    ctx->pc = 0x19880cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x198810: 0x641825
    ctx->pc = 0x198810u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x198814: 0x621025
    ctx->pc = 0x198814u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x198818: 0x1000001e
    ctx->pc = 0x198818u;
    {
        const bool branch_taken_0x198818 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19881Cu;
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
        if (branch_taken_0x198818) {
            ctx->pc = 0x198894u;
            goto label_198894;
        }
    }
    ctx->pc = 0x198820u;
label_198820:
    // 0x198820: 0x8e04000c
    ctx->pc = 0x198820u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x198824: 0x24020003
    ctx->pc = 0x198824u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x198828: 0x14820006
    ctx->pc = 0x198828u;
    {
        const bool branch_taken_0x198828 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x19882Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
        if (branch_taken_0x198828) {
            ctx->pc = 0x198844u;
            goto label_198844;
        }
    }
    ctx->pc = 0x198830u;
    // 0x198830: 0x24040080
    ctx->pc = 0x198830u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 128));
    // 0x198834: 0x4103c
    ctx->pc = 0x198834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x198838: 0x821025
    ctx->pc = 0x198838u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19883c: 0x10000003
    ctx->pc = 0x19883Cu;
    {
        const bool branch_taken_0x19883c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x198840u;
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
        if (branch_taken_0x19883c) {
            ctx->pc = 0x19884Cu;
            goto label_19884c;
        }
    }
    ctx->pc = 0x198844u;
label_198844:
    // 0x198844: 0x2103c
    ctx->pc = 0x198844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x198848: 0xfca20000
    ctx->pc = 0x198848u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_19884c:
    // 0x19884c: 0x9e050020
    ctx->pc = 0x19884cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x198850: 0x3143c
    ctx->pc = 0x198850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x198854: 0x86040016
    ctx->pc = 0x198854u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x198858: 0x2143f
    ctx->pc = 0x198858u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19885c: 0x86030018
    ctx->pc = 0x19885cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x198860: 0x233b8
    ctx->pc = 0x198860u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 14);
    // 0x198864: 0x86090014
    ctx->pc = 0x198864u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x198868: 0x24020004
    ctx->pc = 0x198868u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x19886c: 0x2103c
    ctx->pc = 0x19886cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x198870: 0x52d38
    ctx->pc = 0x198870u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x198874: 0x426b8
    ctx->pc = 0x198874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 26);
    // 0x198878: 0x31fb8
    ctx->pc = 0x198878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x19887c: 0x1263025
    ctx->pc = 0x19887cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x198880: 0xa62825
    ctx->pc = 0x198880u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x198884: 0x852025
    ctx->pc = 0x198884u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x198888: 0x641825
    ctx->pc = 0x198888u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19888c: 0x621025
    ctx->pc = 0x19888cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x198890: 0xfce20000
    ctx->pc = 0x198890u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
label_198894:
    // 0x198894: 0x3c030006
    ctx->pc = 0x198894u;
    SET_GPR_U32(ctx, 3, ((uint32_t)6 << 16));
    // 0x198898: 0x3c020002
    ctx->pc = 0x198898u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x19889c: 0x1631824
    ctx->pc = 0x19889cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1988a0: 0x10620007
    ctx->pc = 0x1988A0u;
    {
        const bool branch_taken_0x1988a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1988a0) {
            ctx->pc = 0x1988C0u;
            goto label_1988c0;
        }
    }
    ctx->pc = 0x1988A8u;
    // 0x1988a8: 0x10600003
    ctx->pc = 0x1988A8u;
    {
        const bool branch_taken_0x1988a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1988a8) {
            ctx->pc = 0x1988B8u;
            goto label_1988b8;
        }
    }
    ctx->pc = 0x1988B0u;
    // 0x1988b0: 0x10000004
    ctx->pc = 0x1988B0u;
    {
        const bool branch_taken_0x1988b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1988B4u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
        if (branch_taken_0x1988b0) {
            ctx->pc = 0x1988C4u;
            goto label_1988c4;
        }
    }
    ctx->pc = 0x1988B8u;
label_1988b8:
    // 0x1988b8: 0x10000008
    ctx->pc = 0x1988B8u;
    {
        const bool branch_taken_0x1988b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1988BCu;
        WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 0));
        if (branch_taken_0x1988b8) {
            ctx->pc = 0x1988DCu;
            goto label_1988dc;
        }
    }
    ctx->pc = 0x1988C0u;
label_1988c0:
    // 0x1988c0: 0x8603001a
    ctx->pc = 0x1988c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
label_1988c4:
    // 0x1988c4: 0x8602001c
    ctx->pc = 0x1988c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1988c8: 0x31bb8
    ctx->pc = 0x1988c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x1988cc: 0x3463000a
    ctx->pc = 0x1988ccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 10));
    // 0x1988d0: 0x210bc
    ctx->pc = 0x1988d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1988d4: 0x621025
    ctx->pc = 0x1988d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1988d8: 0xfd020000
    ctx->pc = 0x1988d8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
label_1988dc:
    // 0x1988dc: 0xfe400000
    ctx->pc = 0x1988dcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
    // 0x1988e0: 0xfe200000
    ctx->pc = 0x1988e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x1988e4: 0x8e020030
    ctx->pc = 0x1988e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1988e8: 0x2c410002
    ctx->pc = 0x1988e8u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x1988ec: 0x14200046
    ctx->pc = 0x1988ECu;
    {
        const bool branch_taken_0x1988ec = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1988F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1988ec) {
            ctx->pc = 0x198A08u;
            goto label_198a08;
        }
    }
    ctx->pc = 0x1988F4u;
    // 0x1988f4: 0x24030005
    ctx->pc = 0x1988f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
label_1988f8:
    // 0x1988f8: 0x31080
    ctx->pc = 0x1988f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1988fc: 0x5d1021
    ctx->pc = 0x1988fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x198900: 0x2463ffff
    ctx->pc = 0x198900u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x198904: 0xac400090
    ctx->pc = 0x198904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 0));
    // 0x198908: 0xac400070
    ctx->pc = 0x198908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
    // 0x19890c: 0x461fffa
    ctx->pc = 0x19890Cu;
    {
        const bool branch_taken_0x19890c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x19890c) {
            ctx->pc = 0x1988F8u;
            goto label_1988f8;
        }
    }
    ctx->pc = 0x198914u;
    // 0x198914: 0x8602001a
    ctx->pc = 0x198914u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x198918: 0x982d
    ctx->pc = 0x198918u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19891c: 0x10000012
    ctx->pc = 0x19891Cu;
    {
        const bool branch_taken_0x19891c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x198920u;
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x19891c) {
            ctx->pc = 0x198968u;
            goto label_198968;
        }
    }
    ctx->pc = 0x198924u;
label_198924:
    // 0x198924: 0x200202d
    ctx->pc = 0x198924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198928: 0xc067410
    ctx->pc = 0x198928u;
    SET_GPR_U32(ctx, 31, 0x198930u);
    ctx->pc = 0x19892Cu;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 19), 2));
    ctx->pc = 0x19D040u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D040_0x19d040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198930u; }
    }
    if (ctx->pc != 0x198930u) { return; }
    ctx->pc = 0x198930u;
    // 0x198930: 0x2bd2021
    ctx->pc = 0x198930u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
    // 0x198934: 0x141983
    ctx->pc = 0x198934u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 20), 6));
    // 0x198938: 0xac820090
    ctx->pc = 0x198938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
    // 0x19893c: 0x6810003
    ctx->pc = 0x19893Cu;
    {
        const bool branch_taken_0x19893c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x198940u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 112));
        if (branch_taken_0x19893c) {
            ctx->pc = 0x19894Cu;
            goto label_19894c;
        }
    }
    ctx->pc = 0x198944u;
    // 0x198944: 0x2682003f
    ctx->pc = 0x198944u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 63));
    // 0x198948: 0x21983
    ctx->pc = 0x198948u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 6));
label_19894c:
    // 0x19894c: 0xac830000
    ctx->pc = 0x19894cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x198950: 0x8c820000
    ctx->pc = 0x198950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x198954: 0x14400002
    ctx->pc = 0x198954u;
    {
        const bool branch_taken_0x198954 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x198958u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x198954) {
            ctx->pc = 0x198960u;
            goto label_198960;
        }
    }
    ctx->pc = 0x19895Cu;
    // 0x19895c: 0xac820000
    ctx->pc = 0x19895cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_198960:
    // 0x198960: 0x14a043
    ctx->pc = 0x198960u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 20), 1));
    // 0x198964: 0x26730001
    ctx->pc = 0x198964u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_198968:
    // 0x198968: 0x8e020030
    ctx->pc = 0x198968u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19896c: 0x2442ffff
    ctx->pc = 0x19896cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x198970: 0x262102b
    ctx->pc = 0x198970u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x198974: 0x1440ffeb
    ctx->pc = 0x198974u;
    {
        const bool branch_taken_0x198974 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x198978u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x198974) {
            ctx->pc = 0x198924u;
            goto label_198924;
        }
    }
    ctx->pc = 0x19897Cu;
    // 0x19897c: 0x8fa60070
    ctx->pc = 0x19897cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x198980: 0x8fa50094
    ctx->pc = 0x198980u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x198984: 0x8fa40074
    ctx->pc = 0x198984u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x198988: 0x8fa30098
    ctx->pc = 0x198988u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19898c: 0x8fa20078
    ctx->pc = 0x19898cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x198990: 0x8fa70090
    ctx->pc = 0x198990u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x198994: 0x633b8
    ctx->pc = 0x198994u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x198998: 0x52d38
    ctx->pc = 0x198998u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x19899c: 0x420bc
    ctx->pc = 0x19899cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 2));
    // 0x1989a0: 0x31a3c
    ctx->pc = 0x1989a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x1989a4: 0x215bc
    ctx->pc = 0x1989a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
    // 0x1989a8: 0xe63025
    ctx->pc = 0x1989a8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1989ac: 0xa62825
    ctx->pc = 0x1989acu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1989b0: 0x852025
    ctx->pc = 0x1989b0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1989b4: 0x641825
    ctx->pc = 0x1989b4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1989b8: 0x431025
    ctx->pc = 0x1989b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1989bc: 0xfe420000
    ctx->pc = 0x1989bcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x1989c0: 0x8fa6007c
    ctx->pc = 0x1989c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1989c4: 0x8fa500a0
    ctx->pc = 0x1989c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1989c8: 0x8fa40080
    ctx->pc = 0x1989c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1989cc: 0x8fa300a4
    ctx->pc = 0x1989ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1989d0: 0x8fa20084
    ctx->pc = 0x1989d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1989d4: 0x8fa7009c
    ctx->pc = 0x1989d4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1989d8: 0x633b8
    ctx->pc = 0x1989d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1989dc: 0x52d38
    ctx->pc = 0x1989dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x1989e0: 0x420bc
    ctx->pc = 0x1989e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 2));
    // 0x1989e4: 0x31a3c
    ctx->pc = 0x1989e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x1989e8: 0x215bc
    ctx->pc = 0x1989e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
    // 0x1989ec: 0xe63025
    ctx->pc = 0x1989ecu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1989f0: 0xa62825
    ctx->pc = 0x1989f0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1989f4: 0x852025
    ctx->pc = 0x1989f4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1989f8: 0x641825
    ctx->pc = 0x1989f8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1989fc: 0x431025
    ctx->pc = 0x1989fcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198a00: 0xfe220000
    ctx->pc = 0x198a00u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x198a04: 0x24020001
    ctx->pc = 0x198a04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_198a08:
    // 0x198a08: 0xdfbf0060
    ctx->pc = 0x198a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_198a0c:
    // 0x198a0c: 0x7bb50050
    ctx->pc = 0x198a0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x198a10: 0x7bb40040
    ctx->pc = 0x198a10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198a14: 0x7bb30030
    ctx->pc = 0x198a14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198a18: 0x7bb20020
    ctx->pc = 0x198a18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198a1c: 0x7bb10010
    ctx->pc = 0x198a1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198a20: 0x7bb00000
    ctx->pc = 0x198a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198a24: 0x3e00008
    ctx->pc = 0x198A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198A28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198524u: goto label_198524;
            case 0x198538u: goto label_198538;
            case 0x19854Cu: goto label_19854c;
            case 0x198578u: goto label_198578;
            case 0x1985A4u: goto label_1985a4;
            case 0x1985B8u: goto label_1985b8;
            case 0x1985BCu: goto label_1985bc;
            case 0x1985D8u: goto label_1985d8;
            case 0x1985F0u: goto label_1985f0;
            case 0x1985F8u: goto label_1985f8;
            case 0x198654u: goto label_198654;
            case 0x198694u: goto label_198694;
            case 0x1986E8u: goto label_1986e8;
            case 0x198724u: goto label_198724;
            case 0x198738u: goto label_198738;
            case 0x19874Cu: goto label_19874c;
            case 0x1987A4u: goto label_1987a4;
            case 0x1987B0u: goto label_1987b0;
            case 0x198820u: goto label_198820;
            case 0x198844u: goto label_198844;
            case 0x19884Cu: goto label_19884c;
            case 0x198894u: goto label_198894;
            case 0x1988B8u: goto label_1988b8;
            case 0x1988C0u: goto label_1988c0;
            case 0x1988C4u: goto label_1988c4;
            case 0x1988DCu: goto label_1988dc;
            case 0x1988F8u: goto label_1988f8;
            case 0x198924u: goto label_198924;
            case 0x19894Cu: goto label_19894c;
            case 0x198960u: goto label_198960;
            case 0x198968u: goto label_198968;
            case 0x198A08u: goto label_198a08;
            case 0x198A0Cu: goto label_198a0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198A2Cu;
    // 0x198a2c: 0x0
    ctx->pc = 0x198a2cu;
    // NOP
}
