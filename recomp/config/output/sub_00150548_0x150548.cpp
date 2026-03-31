#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00150548
// Address: 0x150548 - 0x1506c0
void sub_00150548_0x150548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x150548u;

    // 0x150548: 0x27bdfff0
    ctx->pc = 0x150548u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15054c: 0x3c040023
    ctx->pc = 0x15054cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x150550: 0xffbf0000
    ctx->pc = 0x150550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150554: 0x2484d858
    ctx->pc = 0x150554u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957144));
    // 0x150558: 0xdfbf0000
    ctx->pc = 0x150558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15055c: 0x805415a
    ctx->pc = 0x15055Cu;
    ctx->pc = 0x150560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x150568u;
    goto label_150568;
    ctx->pc = 0x150564u;
    // 0x150564: 0x0
    ctx->pc = 0x150564u;
    // NOP
label_150568:
    // 0x150568: 0xac800010
    ctx->pc = 0x150568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x15056c: 0xac800000
    ctx->pc = 0x15056cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x150570: 0xac800004
    ctx->pc = 0x150570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x150574: 0xac800008
    ctx->pc = 0x150574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x150578: 0x3e00008
    ctx->pc = 0x150578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15057Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150568u: goto label_150568;
            case 0x1505D0u: goto label_1505d0;
            case 0x150630u: goto label_150630;
            case 0x150670u: goto label_150670;
            case 0x1506A0u: goto label_1506a0;
            case 0x1506ACu: goto label_1506ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x150580u;
    // 0x150580: 0x27bdffe0
    ctx->pc = 0x150580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x150584: 0xffb00000
    ctx->pc = 0x150584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x150588: 0x80802d
    ctx->pc = 0x150588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15058c: 0xffb10008
    ctx->pc = 0x15058cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x150590: 0xc0882d
    ctx->pc = 0x150590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150594: 0xffb20010
    ctx->pc = 0x150594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x150598: 0xffbf0018
    ctx->pc = 0x150598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x15059c: 0xc05578e
    ctx->pc = 0x15059Cu;
    SET_GPR_U32(ctx, 31, 0x1505A4u);
    ctx->pc = 0x1505A0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x155E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00155E38_0x155e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1505A4u; }
    }
    if (ctx->pc != 0x1505A4u) { return; }
    ctx->pc = 0x1505A4u;
    // 0x1505a4: 0x3c05ff03
    ctx->pc = 0x1505a4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
    // 0x1505a8: 0x26100004
    ctx->pc = 0x1505a8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x1505ac: 0x202d
    ctx->pc = 0x1505acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505b0: 0x10400007
    ctx->pc = 0x1505B0u;
    {
        const bool branch_taken_0x1505b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1505B4u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 515));
        if (branch_taken_0x1505b0) {
            ctx->pc = 0x1505D0u;
            goto label_1505d0;
        }
    }
    ctx->pc = 0x1505B8u;
    // 0x1505b8: 0xdfb00000
    ctx->pc = 0x1505b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1505bc: 0xdfb10008
    ctx->pc = 0x1505bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1505c0: 0xdfb20010
    ctx->pc = 0x1505c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1505c4: 0xdfbf0018
    ctx->pc = 0x1505c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1505c8: 0x805419c
    ctx->pc = 0x1505C8u;
    ctx->pc = 0x1505CCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x150670u;
    goto label_150670;
    ctx->pc = 0x1505D0u;
label_1505d0:
    // 0x1505d0: 0xae110004
    ctx->pc = 0x1505d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x1505d4: 0xae120000
    ctx->pc = 0x1505d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x1505d8: 0xdfb10008
    ctx->pc = 0x1505d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1505dc: 0xdfb00000
    ctx->pc = 0x1505dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1505e0: 0xdfb20010
    ctx->pc = 0x1505e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1505e4: 0xdfbf0018
    ctx->pc = 0x1505e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1505e8: 0x3e00008
    ctx->pc = 0x1505E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1505ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150568u: goto label_150568;
            case 0x1505D0u: goto label_1505d0;
            case 0x150630u: goto label_150630;
            case 0x150670u: goto label_150670;
            case 0x1506A0u: goto label_1506a0;
            case 0x1506ACu: goto label_1506ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1505F0u;
    // 0x1505f0: 0x27bdffe0
    ctx->pc = 0x1505f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1505f4: 0xffb00000
    ctx->pc = 0x1505f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1505f8: 0x80802d
    ctx->pc = 0x1505f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505fc: 0xffb10008
    ctx->pc = 0x1505fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x150600: 0xffbf0010
    ctx->pc = 0x150600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x150604: 0xc05578e
    ctx->pc = 0x150604u;
    SET_GPR_U32(ctx, 31, 0x15060Cu);
    ctx->pc = 0x150608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x155E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00155E38_0x155e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15060Cu; }
    }
    if (ctx->pc != 0x15060Cu) { return; }
    ctx->pc = 0x15060Cu;
    // 0x15060c: 0x3c05ff03
    ctx->pc = 0x15060cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
    // 0x150610: 0x10400007
    ctx->pc = 0x150610u;
    {
        const bool branch_taken_0x150610 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x150614u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x150610) {
            ctx->pc = 0x150630u;
            goto label_150630;
        }
    }
    ctx->pc = 0x150618u;
    // 0x150618: 0xdfb00000
    ctx->pc = 0x150618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15061c: 0x34a50204
    ctx->pc = 0x15061cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 516));
    // 0x150620: 0xdfb10008
    ctx->pc = 0x150620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x150624: 0xdfbf0010
    ctx->pc = 0x150624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150628: 0x805419c
    ctx->pc = 0x150628u;
    ctx->pc = 0x15062Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x150670u;
    goto label_150670;
    ctx->pc = 0x150630u;
label_150630:
    // 0x150630: 0x6a02000b
    ctx->pc = 0x150630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x150634: 0x6e020004
    ctx->pc = 0x150634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x150638: 0x6a030013
    ctx->pc = 0x150638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x15063c: 0x6e03000c
    ctx->pc = 0x15063cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x150640: 0x8e040014
    ctx->pc = 0x150640u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x150644: 0xb2220007
    ctx->pc = 0x150644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150648: 0xb6220000
    ctx->pc = 0x150648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15064c: 0xb223000f
    ctx->pc = 0x15064cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150650: 0xb6230008
    ctx->pc = 0x150650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150654: 0xae240010
    ctx->pc = 0x150654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x150658: 0xdfbf0010
    ctx->pc = 0x150658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15065c: 0xdfb00000
    ctx->pc = 0x15065cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150660: 0xdfb10008
    ctx->pc = 0x150660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x150664: 0x3e00008
    ctx->pc = 0x150664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150668u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150568u: goto label_150568;
            case 0x1505D0u: goto label_1505d0;
            case 0x150630u: goto label_150630;
            case 0x150670u: goto label_150670;
            case 0x1506A0u: goto label_1506a0;
            case 0x1506ACu: goto label_1506ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15066Cu;
    // 0x15066c: 0x0
    ctx->pc = 0x15066cu;
    // NOP
label_150670:
    // 0x150670: 0x27bdfff0
    ctx->pc = 0x150670u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150674: 0x80102d
    ctx->pc = 0x150674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150678: 0xffb00000
    ctx->pc = 0x150678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15067c: 0xa0802d
    ctx->pc = 0x15067cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150680: 0xffbf0008
    ctx->pc = 0x150680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x150684: 0x14400006
    ctx->pc = 0x150684u;
    {
        const bool branch_taken_0x150684 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x150688u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x150684) {
            ctx->pc = 0x1506A0u;
            goto label_1506a0;
        }
    }
    ctx->pc = 0x15068Cu;
    // 0x15068c: 0x3c040023
    ctx->pc = 0x15068cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x150690: 0xc0541b0
    ctx->pc = 0x150690u;
    SET_GPR_U32(ctx, 31, 0x150698u);
    ctx->pc = 0x150694u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957144));
    ctx->pc = 0x1506C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001506C0_0x1506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150698u; }
    }
    if (ctx->pc != 0x150698u) { return; }
    ctx->pc = 0x150698u;
    // 0x150698: 0x10000004
    ctx->pc = 0x150698u;
    {
        const bool branch_taken_0x150698 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15069Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x150698) {
            ctx->pc = 0x1506ACu;
            goto label_1506ac;
        }
    }
    ctx->pc = 0x1506A0u;
label_1506a0:
    // 0x1506a0: 0xc0541b0
    ctx->pc = 0x1506A0u;
    SET_GPR_U32(ctx, 31, 0x1506A8u);
    ctx->pc = 0x1506C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001506C0_0x1506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1506A8u; }
    }
    if (ctx->pc != 0x1506A8u) { return; }
    ctx->pc = 0x1506A8u;
    // 0x1506a8: 0x200102d
    ctx->pc = 0x1506a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1506ac:
    // 0x1506ac: 0xdfb00000
    ctx->pc = 0x1506acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1506b0: 0xdfbf0008
    ctx->pc = 0x1506b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1506b4: 0x3e00008
    ctx->pc = 0x1506B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1506B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150568u: goto label_150568;
            case 0x1505D0u: goto label_1505d0;
            case 0x150630u: goto label_150630;
            case 0x150670u: goto label_150670;
            case 0x1506A0u: goto label_1506a0;
            case 0x1506ACu: goto label_1506ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1506BCu;
    // 0x1506bc: 0x0
    ctx->pc = 0x1506bcu;
    // NOP
}
