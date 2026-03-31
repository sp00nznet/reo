#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001068A8
// Address: 0x1068a8 - 0x106ad8
void sub_001068A8_0x1068a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1068a8u;

label_1068a8:
    // 0x1068a8: 0x27bdffb0
    ctx->pc = 0x1068a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1068ac: 0xffb50028
    ctx->pc = 0x1068acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1068b0: 0x3c150021
    ctx->pc = 0x1068b0u;
    SET_GPR_U32(ctx, 21, ((uint32_t)33 << 16));
    // 0x1068b4: 0xffb30018
    ctx->pc = 0x1068b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1068b8: 0xa0982d
    ctx->pc = 0x1068b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1068bc: 0xffb60030
    ctx->pc = 0x1068bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1068c0: 0x80b02d
    ctx->pc = 0x1068c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1068c4: 0xffb70038
    ctx->pc = 0x1068c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1068c8: 0xffb00000
    ctx->pc = 0x1068c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1068cc: 0xffb10008
    ctx->pc = 0x1068ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1068d0: 0xffb20010
    ctx->pc = 0x1068d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1068d4: 0xffb40020
    ctx->pc = 0x1068d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1068d8: 0xffbf0040
    ctx->pc = 0x1068d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1068dc: 0xc0413b8
    ctx->pc = 0x1068DCu;
    SET_GPR_U32(ctx, 31, 0x1068E4u);
    ctx->pc = 0x1068E0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x104EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EE0_0x104ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1068E4u; }
    }
    if (ctx->pc != 0x1068E4u) { return; }
    ctx->pc = 0x1068E4u;
    // 0x1068e4: 0x8ea294f8
    ctx->pc = 0x1068e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294939896)));
    // 0x1068e8: 0x8c430000
    ctx->pc = 0x1068e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1068ec: 0x1460000c
    ctx->pc = 0x1068ECu;
    {
        const bool branch_taken_0x1068ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1068F0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1068ec) {
            ctx->pc = 0x106920u;
            goto label_106920;
        }
    }
    ctx->pc = 0x1068F4u;
    // 0x1068f4: 0x10000033
    ctx->pc = 0x1068F4u;
    {
        const bool branch_taken_0x1068f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1068F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1068f4) {
            ctx->pc = 0x1069C4u;
            goto label_1069c4;
        }
    }
    ctx->pc = 0x1068FCu;
    // 0x1068fc: 0x0
    ctx->pc = 0x1068fcu;
    // NOP
label_106900:
    // 0x106900: 0x2c0202d
    ctx->pc = 0x106900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106904: 0x8c620000
    ctx->pc = 0x106904u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x106908: 0x2221023
    ctx->pc = 0x106908u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x10690c: 0x21083
    ctx->pc = 0x10690cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x106910: 0xc0413ba
    ctx->pc = 0x106910u;
    SET_GPR_U32(ctx, 31, 0x106918u);
    ctx->pc = 0x106914u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x104EE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EE8_0x104ee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106918u; }
    }
    if (ctx->pc != 0x106918u) { return; }
    ctx->pc = 0x106918u;
    // 0x106918: 0x1000002a
    ctx->pc = 0x106918u;
    {
        const bool branch_taken_0x106918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10691Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x106918) {
            ctx->pc = 0x1069C4u;
            goto label_1069c4;
        }
    }
    ctx->pc = 0x106920u;
label_106920:
    // 0x106920: 0x82030000
    ctx->pc = 0x106920u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106924: 0x1060000f
    ctx->pc = 0x106924u;
    {
        const bool branch_taken_0x106924 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x106928u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x106924) {
            ctx->pc = 0x106964u;
            goto label_106964;
        }
    }
    ctx->pc = 0x10692Cu;
    // 0x10692c: 0x2402003d
    ctx->pc = 0x10692cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 61));
    // 0x106930: 0x1062000d
    ctx->pc = 0x106930u;
    {
        const bool branch_taken_0x106930 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x106934u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294939896)));
        if (branch_taken_0x106930) {
            ctx->pc = 0x106968u;
            goto label_106968;
        }
    }
    ctx->pc = 0x106938u;
    // 0x106938: 0x2403003d
    ctx->pc = 0x106938u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 61));
    // 0x10693c: 0x26100001
    ctx->pc = 0x10693cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_106940:
    // 0x106940: 0x82020000
    ctx->pc = 0x106940u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106944: 0x10400007
    ctx->pc = 0x106944u;
    {
        const bool branch_taken_0x106944 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x106948u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x106944) {
            ctx->pc = 0x106964u;
            goto label_106964;
        }
    }
    ctx->pc = 0x10694Cu;
    // 0x10694c: 0x0
    ctx->pc = 0x10694cu;
    // NOP
    // 0x106950: 0x0
    ctx->pc = 0x106950u;
    // NOP
    // 0x106954: 0x0
    ctx->pc = 0x106954u;
    // NOP
    // 0x106958: 0x0
    ctx->pc = 0x106958u;
    // NOP
    // 0x10695c: 0x5443fff8
    ctx->pc = 0x10695Cu;
    {
        const bool branch_taken_0x10695c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x10695c) {
            ctx->pc = 0x106960u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x106940u;
            goto label_106940;
        }
    }
    ctx->pc = 0x106964u;
label_106964:
    // 0x106964: 0x8ea294f8
    ctx->pc = 0x106964u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294939896)));
label_106968:
    // 0x106968: 0x8c510000
    ctx->pc = 0x106968u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10696c: 0x8e240000
    ctx->pc = 0x10696cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x106970: 0x10800011
    ctx->pc = 0x106970u;
    {
        const bool branch_taken_0x106970 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x106970) {
            ctx->pc = 0x1069B8u;
            goto label_1069b8;
        }
    }
    ctx->pc = 0x106978u;
    // 0x106978: 0x2414003d
    ctx->pc = 0x106978u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 61));
    // 0x10697c: 0x0
    ctx->pc = 0x10697cu;
    // NOP
label_106980:
    // 0x106980: 0x260282d
    ctx->pc = 0x106980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106984: 0xc042d10
    ctx->pc = 0x106984u;
    SET_GPR_U32(ctx, 31, 0x10698Cu);
    ctx->pc = 0x106988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10698Cu; }
    }
    if (ctx->pc != 0x10698Cu) { return; }
    ctx->pc = 0x10698Cu;
    // 0x10698c: 0x54400007
    ctx->pc = 0x10698Cu;
    {
        const bool branch_taken_0x10698c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10698c) {
            ctx->pc = 0x106990u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
            ctx->pc = 0x1069ACu;
            goto label_1069ac;
        }
    }
    ctx->pc = 0x106994u;
    // 0x106994: 0x8e220000
    ctx->pc = 0x106994u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x106998: 0x528021
    ctx->pc = 0x106998u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x10699c: 0x82030000
    ctx->pc = 0x10699cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1069a0: 0x1074ffd7
    ctx->pc = 0x1069A0u;
    {
        const bool branch_taken_0x1069a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 20));
        ctx->pc = 0x1069A4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 4294939896)));
        if (branch_taken_0x1069a0) {
            ctx->pc = 0x106900u;
            goto label_106900;
        }
    }
    ctx->pc = 0x1069A8u;
    // 0x1069a8: 0x26310004
    ctx->pc = 0x1069a8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
label_1069ac:
    // 0x1069ac: 0x8e220000
    ctx->pc = 0x1069acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1069b0: 0x1440fff3
    ctx->pc = 0x1069B0u;
    {
        const bool branch_taken_0x1069b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1069B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1069b0) {
            ctx->pc = 0x106980u;
            goto label_106980;
        }
    }
    ctx->pc = 0x1069B8u;
label_1069b8:
    // 0x1069b8: 0xc0413ba
    ctx->pc = 0x1069B8u;
    SET_GPR_U32(ctx, 31, 0x1069C0u);
    ctx->pc = 0x1069BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x104EE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EE8_0x104ee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1069C0u; }
    }
    if (ctx->pc != 0x1069C0u) { return; }
    ctx->pc = 0x1069C0u;
    // 0x1069c0: 0x102d
    ctx->pc = 0x1069c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1069c4:
    // 0x1069c4: 0xdfb00000
    ctx->pc = 0x1069c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1069c8: 0xdfb10008
    ctx->pc = 0x1069c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1069cc: 0xdfb20010
    ctx->pc = 0x1069ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1069d0: 0xdfb30018
    ctx->pc = 0x1069d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1069d4: 0xdfb40020
    ctx->pc = 0x1069d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1069d8: 0xdfb50028
    ctx->pc = 0x1069d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1069dc: 0xdfb60030
    ctx->pc = 0x1069dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1069e0: 0xdfb70038
    ctx->pc = 0x1069e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1069e4: 0xdfbf0040
    ctx->pc = 0x1069e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1069e8: 0x3e00008
    ctx->pc = 0x1069E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1069ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1068A8u: goto label_1068a8;
            case 0x106900u: goto label_106900;
            case 0x106920u: goto label_106920;
            case 0x106940u: goto label_106940;
            case 0x106964u: goto label_106964;
            case 0x106968u: goto label_106968;
            case 0x106980u: goto label_106980;
            case 0x1069ACu: goto label_1069ac;
            case 0x1069B8u: goto label_1069b8;
            case 0x1069C4u: goto label_1069c4;
            case 0x106A00u: goto label_106a00;
            case 0x106A10u: goto label_106a10;
            case 0x106A68u: goto label_106a68;
            case 0x106A78u: goto label_106a78;
            case 0x106A7Cu: goto label_106a7c;
            case 0x106A80u: goto label_106a80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1069F0u;
    // 0x1069f0: 0x27bdffe0
    ctx->pc = 0x1069f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1069f4: 0xffbf0010
    ctx->pc = 0x1069f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1069f8: 0xc041a2a
    ctx->pc = 0x1069F8u;
    SET_GPR_U32(ctx, 31, 0x106A00u);
    ctx->pc = 0x1069FCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1068A8u;
    goto label_1068a8;
    ctx->pc = 0x106A00u;
label_106a00:
    // 0x106a00: 0xdfbf0010
    ctx->pc = 0x106a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106a04: 0x3e00008
    ctx->pc = 0x106A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106A08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1068A8u: goto label_1068a8;
            case 0x106900u: goto label_106900;
            case 0x106920u: goto label_106920;
            case 0x106940u: goto label_106940;
            case 0x106964u: goto label_106964;
            case 0x106968u: goto label_106968;
            case 0x106980u: goto label_106980;
            case 0x1069ACu: goto label_1069ac;
            case 0x1069B8u: goto label_1069b8;
            case 0x1069C4u: goto label_1069c4;
            case 0x106A00u: goto label_106a00;
            case 0x106A10u: goto label_106a10;
            case 0x106A68u: goto label_106a68;
            case 0x106A78u: goto label_106a78;
            case 0x106A7Cu: goto label_106a7c;
            case 0x106A80u: goto label_106a80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x106A0Cu;
    // 0x106a0c: 0x0
    ctx->pc = 0x106a0cu;
    // NOP
label_106a10:
    // 0x106a10: 0x27bdffd0
    ctx->pc = 0x106a10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x106a14: 0xffb00000
    ctx->pc = 0x106a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106a18: 0xc0802d
    ctx->pc = 0x106a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a1c: 0xffb10008
    ctx->pc = 0x106a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x106a20: 0x80882d
    ctx->pc = 0x106a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a24: 0xffb20010
    ctx->pc = 0x106a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x106a28: 0xa0902d
    ctx->pc = 0x106a28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a2c: 0xffb30018
    ctx->pc = 0x106a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x106a30: 0x200202d
    ctx->pc = 0x106a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a34: 0x12000010
    ctx->pc = 0x106A34u;
    {
        const bool branch_taken_0x106a34 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x106A38u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        if (branch_taken_0x106a34) {
            ctx->pc = 0x106A78u;
            goto label_106a78;
        }
    }
    ctx->pc = 0x106A3Cu;
    // 0x106a3c: 0x3c130023
    ctx->pc = 0x106a3cu;
    SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
    // 0x106a40: 0xc042b9e
    ctx->pc = 0x106A40u;
    SET_GPR_U32(ctx, 31, 0x106A48u);
    ctx->pc = 0x106A44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 30992));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106A48u; }
    }
    if (ctx->pc != 0x106A48u) { return; }
    ctx->pc = 0x106A48u;
    // 0x106a48: 0x3c050023
    ctx->pc = 0x106a48u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x106a4c: 0x24a57900
    ctx->pc = 0x106a4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30976));
    // 0x106a50: 0x10400005
    ctx->pc = 0x106A50u;
    {
        const bool branch_taken_0x106a50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x106A54u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x106a50) {
            ctx->pc = 0x106A68u;
            goto label_106a68;
        }
    }
    ctx->pc = 0x106A58u;
    // 0x106a58: 0xc042b9e
    ctx->pc = 0x106A58u;
    SET_GPR_U32(ctx, 31, 0x106A60u);
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106A60u; }
    }
    if (ctx->pc != 0x106A60u) { return; }
    ctx->pc = 0x106A60u;
    // 0x106a60: 0x14400007
    ctx->pc = 0x106A60u;
    {
        const bool branch_taken_0x106a60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x106A64u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x106a60) {
            ctx->pc = 0x106A80u;
            goto label_106a80;
        }
    }
    ctx->pc = 0x106A68u;
label_106a68:
    // 0x106a68: 0xae300034
    ctx->pc = 0x106a68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x106a6c: 0x10000003
    ctx->pc = 0x106A6Cu;
    {
        const bool branch_taken_0x106a6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x106A70u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        if (branch_taken_0x106a6c) {
            ctx->pc = 0x106A7Cu;
            goto label_106a7c;
        }
    }
    ctx->pc = 0x106A74u;
    // 0x106a74: 0x0
    ctx->pc = 0x106a74u;
    // NOP
label_106a78:
    // 0x106a78: 0x3c130023
    ctx->pc = 0x106a78u;
    SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
label_106a7c:
    // 0x106a7c: 0x26627910
    ctx->pc = 0x106a7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 30992));
label_106a80:
    // 0x106a80: 0xdfb00000
    ctx->pc = 0x106a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106a84: 0xdfb10008
    ctx->pc = 0x106a84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106a88: 0xdfb20010
    ctx->pc = 0x106a88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106a8c: 0xdfb30018
    ctx->pc = 0x106a8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x106a90: 0xdfbf0020
    ctx->pc = 0x106a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106a94: 0x3e00008
    ctx->pc = 0x106A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106A98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1068A8u: goto label_1068a8;
            case 0x106900u: goto label_106900;
            case 0x106920u: goto label_106920;
            case 0x106940u: goto label_106940;
            case 0x106964u: goto label_106964;
            case 0x106968u: goto label_106968;
            case 0x106980u: goto label_106980;
            case 0x1069ACu: goto label_1069ac;
            case 0x1069B8u: goto label_1069b8;
            case 0x1069C4u: goto label_1069c4;
            case 0x106A00u: goto label_106a00;
            case 0x106A10u: goto label_106a10;
            case 0x106A68u: goto label_106a68;
            case 0x106A78u: goto label_106a78;
            case 0x106A7Cu: goto label_106a7c;
            case 0x106A80u: goto label_106a80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x106A9Cu;
    // 0x106a9c: 0x0
    ctx->pc = 0x106a9cu;
    // NOP
    // 0x106aa0: 0x3c020023
    ctx->pc = 0x106aa0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x106aa4: 0x3e00008
    ctx->pc = 0x106AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106AA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30928));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1068A8u: goto label_1068a8;
            case 0x106900u: goto label_106900;
            case 0x106920u: goto label_106920;
            case 0x106940u: goto label_106940;
            case 0x106964u: goto label_106964;
            case 0x106968u: goto label_106968;
            case 0x106980u: goto label_106980;
            case 0x1069ACu: goto label_1069ac;
            case 0x1069B8u: goto label_1069b8;
            case 0x1069C4u: goto label_1069c4;
            case 0x106A00u: goto label_106a00;
            case 0x106A10u: goto label_106a10;
            case 0x106A68u: goto label_106a68;
            case 0x106A78u: goto label_106a78;
            case 0x106A7Cu: goto label_106a7c;
            case 0x106A80u: goto label_106a80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x106AACu;
    // 0x106aac: 0x0
    ctx->pc = 0x106aacu;
    // NOP
    // 0x106ab0: 0x27bdfff0
    ctx->pc = 0x106ab0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x106ab4: 0x3c020021
    ctx->pc = 0x106ab4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x106ab8: 0xffbf0000
    ctx->pc = 0x106ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106abc: 0xa0302d
    ctx->pc = 0x106abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ac0: 0x80282d
    ctx->pc = 0x106ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ac4: 0x8c4497f0
    ctx->pc = 0x106ac4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294940656)));
    // 0x106ac8: 0xdfbf0000
    ctx->pc = 0x106ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106acc: 0x8041a84
    ctx->pc = 0x106ACCu;
    ctx->pc = 0x106AD0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x106A10u;
    goto label_106a10;
    ctx->pc = 0x106AD4u;
    // 0x106ad4: 0x0
    ctx->pc = 0x106ad4u;
    // NOP
}
