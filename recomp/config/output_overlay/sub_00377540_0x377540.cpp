#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00377540
// Address: 0x377540 - 0x3777c0
void sub_00377540_0x377540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x377540u;

label_377540:
    // 0x377540: 0x3c010032
    ctx->pc = 0x377540u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x377544: 0x8c224470
    ctx->pc = 0x377544u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 17520)));
    // 0x377548: 0x3c010057
    ctx->pc = 0x377548u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37754c: 0xac22aef8
    ctx->pc = 0x37754cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946552), GPR_U32(ctx, 2));
    // 0x377550: 0x3c010057
    ctx->pc = 0x377550u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377554: 0x3e00008
    ctx->pc = 0x377554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377558u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946552)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x377540u: goto label_377540;
            case 0x377590u: goto label_377590;
            case 0x3775A0u: goto label_3775a0;
            case 0x3775C8u: goto label_3775c8;
            case 0x377638u: goto label_377638;
            case 0x377640u: goto label_377640;
            case 0x37769Cu: goto label_37769c;
            case 0x3776A4u: goto label_3776a4;
            case 0x3776ECu: goto label_3776ec;
            case 0x377754u: goto label_377754;
            case 0x37775Cu: goto label_37775c;
            case 0x377790u: goto label_377790;
            case 0x377794u: goto label_377794;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37755Cu;
    // 0x37755c: 0x0
    ctx->pc = 0x37755cu;
    // NOP
    // 0x377560: 0x27bdffc0
    ctx->pc = 0x377560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x377564: 0x3c010057
    ctx->pc = 0x377564u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377568: 0xffbf0030
    ctx->pc = 0x377568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x37756c: 0x7fb20020
    ctx->pc = 0x37756cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x377570: 0x7fb10010
    ctx->pc = 0x377570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x377574: 0x7fb00000
    ctx->pc = 0x377574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x377578: 0x80882d
    ctx->pc = 0x377578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37757c: 0x8c22aef8
    ctx->pc = 0x37757cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946552)));
    // 0x377580: 0x14400007
    ctx->pc = 0x377580u;
    {
        const bool branch_taken_0x377580 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x377584u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x377580) {
            ctx->pc = 0x3775A0u;
            goto label_3775a0;
        }
    }
    ctx->pc = 0x377588u;
    // 0x377588: 0xc0ddd50
    ctx->pc = 0x377588u;
    SET_GPR_U32(ctx, 31, 0x377590u);
    ctx->pc = 0x377540u;
    goto label_377540;
    ctx->pc = 0x377590u;
label_377590:
    // 0x377590: 0x14400003
    ctx->pc = 0x377590u;
    {
        const bool branch_taken_0x377590 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x377590) {
            ctx->pc = 0x3775A0u;
            goto label_3775a0;
        }
    }
    ctx->pc = 0x377598u;
    // 0x377598: 0x1000007d
    ctx->pc = 0x377598u;
    {
        const bool branch_taken_0x377598 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37759Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x377598) {
            ctx->pc = 0x377790u;
            goto label_377790;
        }
    }
    ctx->pc = 0x3775A0u;
label_3775a0:
    // 0x3775a0: 0x92230002
    ctx->pc = 0x3775a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3775a4: 0x24020002
    ctx->pc = 0x3775a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x3775a8: 0x1062003e
    ctx->pc = 0x3775A8u;
    {
        const bool branch_taken_0x3775a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x3775ACu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x3775a8) {
            ctx->pc = 0x3776A4u;
            goto label_3776a4;
        }
    }
    ctx->pc = 0x3775B0u;
    // 0x3775b0: 0x10660023
    ctx->pc = 0x3775B0u;
    {
        const bool branch_taken_0x3775b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 6));
        if (branch_taken_0x3775b0) {
            ctx->pc = 0x377640u;
            goto label_377640;
        }
    }
    ctx->pc = 0x3775B8u;
    // 0x3775b8: 0x10600003
    ctx->pc = 0x3775B8u;
    {
        const bool branch_taken_0x3775b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x3775b8) {
            ctx->pc = 0x3775C8u;
            goto label_3775c8;
        }
    }
    ctx->pc = 0x3775C0u;
    // 0x3775c0: 0x10000066
    ctx->pc = 0x3775C0u;
    {
        const bool branch_taken_0x3775c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3775C4u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
        if (branch_taken_0x3775c0) {
            ctx->pc = 0x37775Cu;
            goto label_37775c;
        }
    }
    ctx->pc = 0x3775C8u;
label_3775c8:
    // 0x3775c8: 0x92300003
    ctx->pc = 0x3775c8u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x3775cc: 0x3c010039
    ctx->pc = 0x3775ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x3775d0: 0x8e220034
    ctx->pc = 0x3775d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3775d4: 0xac401460
    ctx->pc = 0x3775d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5216), GPR_U32(ctx, 0));
    // 0x3775d8: 0x8e220034
    ctx->pc = 0x3775d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3775dc: 0xac401464
    ctx->pc = 0x3775dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5220), GPR_U32(ctx, 0));
    // 0x3775e0: 0x92230b98
    ctx->pc = 0x3775e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2968)));
    // 0x3775e4: 0x8c228ca0
    ctx->pc = 0x3775e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294937760)));
    // 0x3775e8: 0x31880
    ctx->pc = 0x3775e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x3775ec: 0x3c010032
    ctx->pc = 0x3775ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3775f0: 0x431021
    ctx->pc = 0x3775f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3775f4: 0x8c25440c
    ctx->pc = 0x3775f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x3775f8: 0x8c440000
    ctx->pc = 0x3775f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3775fc: 0xc07323c
    ctx->pc = 0x3775FCu;
    SET_GPR_U32(ctx, 31, 0x377604u);
    ctx->pc = 0x377600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    {
        auto targetFn = runtime->lookupFunction(0x1CC8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377604u; }
        if (ctx->pc != 0x377604u) { return; }
    }
    ctx->pc = 0x377604u;
    // 0x377604: 0x40902d
    ctx->pc = 0x377604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377608: 0x1a40000b
    ctx->pc = 0x377608u;
    {
        const bool branch_taken_0x377608 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x37760Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x377608) {
            ctx->pc = 0x377638u;
            goto label_377638;
        }
    }
    ctx->pc = 0x377610u;
    // 0x377610: 0x24061324
    ctx->pc = 0x377610u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4900));
    // 0x377614: 0x8c22aef8
    ctx->pc = 0x377614u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946552)));
    // 0x377618: 0x2061818
    ctx->pc = 0x377618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x37761c: 0x3c010032
    ctx->pc = 0x37761cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x377620: 0x8c25440c
    ctx->pc = 0x377620u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x377624: 0xc0636ec
    ctx->pc = 0x377624u;
    SET_GPR_U32(ctx, 31, 0x37762Cu);
    ctx->pc = 0x377628u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x18DBB0u;
    {
        auto targetFn = runtime->lookupFunction(0x18DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37762Cu; }
        if (ctx->pc != 0x37762Cu) { return; }
    }
    ctx->pc = 0x37762Cu;
    // 0x37762c: 0x220202d
    ctx->pc = 0x37762cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377630: 0xc0dddf0
    ctx->pc = 0x377630u;
    SET_GPR_U32(ctx, 31, 0x377638u);
    ctx->pc = 0x377634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3777C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003777C0_0x3777c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377638u; }
    }
    if (ctx->pc != 0x377638u) { return; }
    ctx->pc = 0x377638u;
label_377638:
    // 0x377638: 0x10000055
    ctx->pc = 0x377638u;
    {
        const bool branch_taken_0x377638 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37763Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x377638) {
            ctx->pc = 0x377790u;
            goto label_377790;
        }
    }
    ctx->pc = 0x377640u;
label_377640:
    // 0x377640: 0x8e220034
    ctx->pc = 0x377640u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x377644: 0x3c010039
    ctx->pc = 0x377644u;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x377648: 0xac401460
    ctx->pc = 0x377648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5216), GPR_U32(ctx, 0));
    // 0x37764c: 0x8e220034
    ctx->pc = 0x37764cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x377650: 0xac401464
    ctx->pc = 0x377650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5220), GPR_U32(ctx, 0));
    // 0x377654: 0x8c228ca0
    ctx->pc = 0x377654u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294937760)));
    // 0x377658: 0x3c010032
    ctx->pc = 0x377658u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37765c: 0x8c440000
    ctx->pc = 0x37765cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x377660: 0x8c25440c
    ctx->pc = 0x377660u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x377664: 0xc07323c
    ctx->pc = 0x377664u;
    SET_GPR_U32(ctx, 31, 0x37766Cu);
    ctx->pc = 0x377668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    {
        auto targetFn = runtime->lookupFunction(0x1CC8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37766Cu; }
        if (ctx->pc != 0x37766Cu) { return; }
    }
    ctx->pc = 0x37766Cu;
    // 0x37766c: 0x40802d
    ctx->pc = 0x37766cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377670: 0x1a00000a
    ctx->pc = 0x377670u;
    {
        const bool branch_taken_0x377670 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x377674u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x377670) {
            ctx->pc = 0x37769Cu;
            goto label_37769c;
        }
    }
    ctx->pc = 0x377678u;
    // 0x377678: 0x24061324
    ctx->pc = 0x377678u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4900));
    // 0x37767c: 0x8c22aef8
    ctx->pc = 0x37767cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946552)));
    // 0x377680: 0x3c010032
    ctx->pc = 0x377680u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x377684: 0x8c25440c
    ctx->pc = 0x377684u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x377688: 0xc0636ec
    ctx->pc = 0x377688u;
    SET_GPR_U32(ctx, 31, 0x377690u);
    ctx->pc = 0x37768Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 19600));
    ctx->pc = 0x18DBB0u;
    {
        auto targetFn = runtime->lookupFunction(0x18DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377690u; }
        if (ctx->pc != 0x377690u) { return; }
    }
    ctx->pc = 0x377690u;
    // 0x377690: 0x220202d
    ctx->pc = 0x377690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377694: 0xc0dddf0
    ctx->pc = 0x377694u;
    SET_GPR_U32(ctx, 31, 0x37769Cu);
    ctx->pc = 0x377698u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x3777C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003777C0_0x3777c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37769Cu; }
    }
    if (ctx->pc != 0x37769Cu) { return; }
    ctx->pc = 0x37769Cu;
label_37769c:
    // 0x37769c: 0x1000003c
    ctx->pc = 0x37769Cu;
    {
        const bool branch_taken_0x37769c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3776A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37769c) {
            ctx->pc = 0x377790u;
            goto label_377790;
        }
    }
    ctx->pc = 0x3776A4u;
label_3776a4:
    // 0x3776a4: 0x8e220034
    ctx->pc = 0x3776a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3776a8: 0x3c030038
    ctx->pc = 0x3776a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x3776ac: 0x24637e90
    ctx->pc = 0x3776acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32400));
    // 0x3776b0: 0xac401460
    ctx->pc = 0x3776b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5216), GPR_U32(ctx, 0));
    // 0x3776b4: 0x8e220034
    ctx->pc = 0x3776b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3776b8: 0xac401464
    ctx->pc = 0x3776b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5220), GPR_U32(ctx, 0));
    // 0x3776bc: 0x92240003
    ctx->pc = 0x3776bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x3776c0: 0x96220bba
    ctx->pc = 0x3776c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 3002)));
    // 0x3776c4: 0x420c0
    ctx->pc = 0x3776c4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
    // 0x3776c8: 0x641821
    ctx->pc = 0x3776c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3776cc: 0x21100
    ctx->pc = 0x3776ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x3776d0: 0x8c630000
    ctx->pc = 0x3776d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3776d4: 0x431821
    ctx->pc = 0x3776d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3776d8: 0x8062000d
    ctx->pc = 0x3776d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x3776dc: 0x14400003
    ctx->pc = 0x3776DCu;
    {
        const bool branch_taken_0x3776dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x3776E0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3776dc) {
            ctx->pc = 0x3776ECu;
            goto label_3776ec;
        }
    }
    ctx->pc = 0x3776E4u;
    // 0x3776e4: 0x1000002b
    ctx->pc = 0x3776E4u;
    {
        const bool branch_taken_0x3776e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3776E8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x3776e4) {
            ctx->pc = 0x377794u;
            goto label_377794;
        }
    }
    ctx->pc = 0x3776ECu;
label_3776ec:
    // 0x3776ec: 0x8470000e
    ctx->pc = 0x3776ecu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x3776f0: 0x3c010039
    ctx->pc = 0x3776f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x3776f4: 0x8c228ca0
    ctx->pc = 0x3776f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294937760)));
    // 0x3776f8: 0x24060001
    ctx->pc = 0x3776f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x3776fc: 0x101880
    ctx->pc = 0x3776fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x377700: 0x3c010032
    ctx->pc = 0x377700u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x377704: 0x431021
    ctx->pc = 0x377704u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x377708: 0x8c25440c
    ctx->pc = 0x377708u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x37770c: 0x8c440000
    ctx->pc = 0x37770cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x377710: 0xc07323c
    ctx->pc = 0x377710u;
    SET_GPR_U32(ctx, 31, 0x377718u);
    ctx->pc = 0x377714u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    {
        auto targetFn = runtime->lookupFunction(0x1CC8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377718u; }
        if (ctx->pc != 0x377718u) { return; }
    }
    ctx->pc = 0x377718u;
    // 0x377718: 0x40902d
    ctx->pc = 0x377718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37771c: 0x1a40000d
    ctx->pc = 0x37771Cu;
    {
        const bool branch_taken_0x37771c = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x37771c) {
            ctx->pc = 0x377754u;
            goto label_377754;
        }
    }
    ctx->pc = 0x377724u;
    // 0x377724: 0x26020005
    ctx->pc = 0x377724u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 5));
    // 0x377728: 0x24061324
    ctx->pc = 0x377728u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4900));
    // 0x37772c: 0x461818
    ctx->pc = 0x37772cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x377730: 0x3c010057
    ctx->pc = 0x377730u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377734: 0x8c22aef8
    ctx->pc = 0x377734u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946552)));
    // 0x377738: 0x3c010032
    ctx->pc = 0x377738u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37773c: 0x8c25440c
    ctx->pc = 0x37773cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x377740: 0xc0636ec
    ctx->pc = 0x377740u;
    SET_GPR_U32(ctx, 31, 0x377748u);
    ctx->pc = 0x377744u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x18DBB0u;
    {
        auto targetFn = runtime->lookupFunction(0x18DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377748u; }
        if (ctx->pc != 0x377748u) { return; }
    }
    ctx->pc = 0x377748u;
    // 0x377748: 0x26050005
    ctx->pc = 0x377748u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 5));
    // 0x37774c: 0xc0dddf0
    ctx->pc = 0x37774Cu;
    SET_GPR_U32(ctx, 31, 0x377754u);
    ctx->pc = 0x377750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3777C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003777C0_0x3777c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377754u; }
    }
    if (ctx->pc != 0x377754u) { return; }
    ctx->pc = 0x377754u;
label_377754:
    // 0x377754: 0x1000000e
    ctx->pc = 0x377754u;
    {
        const bool branch_taken_0x377754 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x377758u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x377754) {
            ctx->pc = 0x377790u;
            goto label_377790;
        }
    }
    ctx->pc = 0x37775Cu;
label_37775c:
    // 0x37775c: 0x3c010032
    ctx->pc = 0x37775cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x377760: 0x2163f
    ctx->pc = 0x377760u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x377764: 0x101880
    ctx->pc = 0x377764u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x377768: 0x22080
    ctx->pc = 0x377768u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 2));
    // 0x37776c: 0x8c25440c
    ctx->pc = 0x37776cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x377770: 0x3c020039
    ctx->pc = 0x377770u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x377774: 0x24428ca0
    ctx->pc = 0x377774u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937760));
    // 0x377778: 0x441021
    ctx->pc = 0x377778u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37777c: 0x8c420000
    ctx->pc = 0x37777cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x377780: 0x431021
    ctx->pc = 0x377780u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x377784: 0x8c440000
    ctx->pc = 0x377784u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x377788: 0xc07323c
    ctx->pc = 0x377788u;
    SET_GPR_U32(ctx, 31, 0x377790u);
    ctx->pc = 0x37778Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    {
        auto targetFn = runtime->lookupFunction(0x1CC8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377790u; }
        if (ctx->pc != 0x377790u) { return; }
    }
    ctx->pc = 0x377790u;
label_377790:
    // 0x377790: 0xdfbf0030
    ctx->pc = 0x377790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_377794:
    // 0x377794: 0x7bb20020
    ctx->pc = 0x377794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377798: 0x7bb10010
    ctx->pc = 0x377798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37779c: 0x7bb00000
    ctx->pc = 0x37779cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3777a0: 0x3e00008
    ctx->pc = 0x3777A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3777A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x377540u: goto label_377540;
            case 0x377590u: goto label_377590;
            case 0x3775A0u: goto label_3775a0;
            case 0x3775C8u: goto label_3775c8;
            case 0x377638u: goto label_377638;
            case 0x377640u: goto label_377640;
            case 0x37769Cu: goto label_37769c;
            case 0x3776A4u: goto label_3776a4;
            case 0x3776ECu: goto label_3776ec;
            case 0x377754u: goto label_377754;
            case 0x37775Cu: goto label_37775c;
            case 0x377790u: goto label_377790;
            case 0x377794u: goto label_377794;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3777A8u;
    // 0x3777a8: 0x0
    ctx->pc = 0x3777a8u;
    // NOP
    // 0x3777ac: 0x0
    ctx->pc = 0x3777acu;
    // NOP
    // 0x3777b0: 0x3e00008
    ctx->pc = 0x3777B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x377540u: goto label_377540;
            case 0x377590u: goto label_377590;
            case 0x3775A0u: goto label_3775a0;
            case 0x3775C8u: goto label_3775c8;
            case 0x377638u: goto label_377638;
            case 0x377640u: goto label_377640;
            case 0x37769Cu: goto label_37769c;
            case 0x3776A4u: goto label_3776a4;
            case 0x3776ECu: goto label_3776ec;
            case 0x377754u: goto label_377754;
            case 0x37775Cu: goto label_37775c;
            case 0x377790u: goto label_377790;
            case 0x377794u: goto label_377794;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3777B8u;
    // 0x3777b8: 0x0
    ctx->pc = 0x3777b8u;
    // NOP
    // 0x3777bc: 0x0
    ctx->pc = 0x3777bcu;
    // NOP
}
