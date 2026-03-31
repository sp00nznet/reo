#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00186798
// Address: 0x186798 - 0x1868c8
void sub_00186798_0x186798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x186798u;

    // 0x186798: 0x27bdfd50
    ctx->pc = 0x186798u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966608));
    // 0x18679c: 0xffb00290
    ctx->pc = 0x18679cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 16));
    // 0x1867a0: 0x80802d
    ctx->pc = 0x1867a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1867a4: 0xffb10298
    ctx->pc = 0x1867a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 664), GPR_U64(ctx, 17));
    // 0x1867a8: 0xa0882d
    ctx->pc = 0x1867a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1867ac: 0xffb202a0
    ctx->pc = 0x1867acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 18));
    // 0x1867b0: 0xffbf02a8
    ctx->pc = 0x1867b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 680), GPR_U64(ctx, 31));
    // 0x1867b4: 0xc062210
    ctx->pc = 0x1867B4u;
    SET_GPR_U32(ctx, 31, 0x1867BCu);
    ctx->pc = 0x1867B8u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 6), 65535));
    ctx->pc = 0x188840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188840_0x188840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867BCu; }
    }
    if (ctx->pc != 0x1867BCu) { return; }
    ctx->pc = 0x1867BCu;
    // 0x1867bc: 0x14400004
    ctx->pc = 0x1867BCu;
    {
        const bool branch_taken_0x1867bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1867C0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2200));
        if (branch_taken_0x1867bc) {
            ctx->pc = 0x1867D0u;
            goto label_1867d0;
        }
    }
    ctx->pc = 0x1867C4u;
    // 0x1867c4: 0x3c028101
    ctx->pc = 0x1867c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1867c8: 0x10000039
    ctx->pc = 0x1867C8u;
    {
        const bool branch_taken_0x1867c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1867CCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 19));
        if (branch_taken_0x1867c8) {
            ctx->pc = 0x1868B0u;
            goto label_1868b0;
        }
    }
    ctx->pc = 0x1867D0u;
label_1867d0:
    // 0x1867d0: 0x3c028101
    ctx->pc = 0x1867d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1867d4: 0x2031818
    ctx->pc = 0x1867d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1867d8: 0x3c040028
    ctx->pc = 0x1867d8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)40 << 16));
    // 0x1867dc: 0x832021
    ctx->pc = 0x1867dcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1867e0: 0x8c8463d4
    ctx->pc = 0x1867e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 25556)));
    // 0x1867e4: 0x10800032
    ctx->pc = 0x1867E4u;
    {
        const bool branch_taken_0x1867e4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1867E8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
        if (branch_taken_0x1867e4) {
            ctx->pc = 0x1868B0u;
            goto label_1868b0;
        }
    }
    ctx->pc = 0x1867ECu;
    // 0x1867ec: 0x220282d
    ctx->pc = 0x1867ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1867f0: 0x200202d
    ctx->pc = 0x1867f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1867f4: 0xc0609a2
    ctx->pc = 0x1867F4u;
    SET_GPR_U32(ctx, 31, 0x1867FCu);
    ctx->pc = 0x1867F8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182688u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182688_0x182688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867FCu; }
    }
    if (ctx->pc != 0x1867FCu) { return; }
    ctx->pc = 0x1867FCu;
    // 0x1867fc: 0x10400005
    ctx->pc = 0x1867FCu;
    {
        const bool branch_taken_0x1867fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1867fc) {
            ctx->pc = 0x186814u;
            goto label_186814;
        }
    }
    ctx->pc = 0x186804u;
    // 0x186804: 0xc06089c
    ctx->pc = 0x186804u;
    SET_GPR_U32(ctx, 31, 0x18680Cu);
    ctx->pc = 0x186808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182270_0x182270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18680Cu; }
    }
    if (ctx->pc != 0x18680Cu) { return; }
    ctx->pc = 0x18680Cu;
    // 0x18680c: 0x14400004
    ctx->pc = 0x18680Cu;
    {
        const bool branch_taken_0x18680c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x18680c) {
            ctx->pc = 0x186820u;
            goto label_186820;
        }
    }
    ctx->pc = 0x186814u;
label_186814:
    // 0x186814: 0x3c028101
    ctx->pc = 0x186814u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x186818: 0x10000025
    ctx->pc = 0x186818u;
    {
        const bool branch_taken_0x186818 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18681Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 22));
        if (branch_taken_0x186818) {
            ctx->pc = 0x1868B0u;
            goto label_1868b0;
        }
    }
    ctx->pc = 0x186820u;
label_186820:
    // 0x186820: 0xc060880
    ctx->pc = 0x186820u;
    SET_GPR_U32(ctx, 31, 0x186828u);
    ctx->pc = 0x186824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182200_0x182200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186828u; }
    }
    if (ctx->pc != 0x186828u) { return; }
    ctx->pc = 0x186828u;
    // 0x186828: 0x14400005
    ctx->pc = 0x186828u;
    {
        const bool branch_taken_0x186828 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18682Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 128));
        if (branch_taken_0x186828) {
            ctx->pc = 0x186840u;
            goto label_186840;
        }
    }
    ctx->pc = 0x186830u;
    // 0x186830: 0x3c028101
    ctx->pc = 0x186830u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x186834: 0x1000001e
    ctx->pc = 0x186834u;
    {
        const bool branch_taken_0x186834 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186838u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 91));
        if (branch_taken_0x186834) {
            ctx->pc = 0x1868B0u;
            goto label_1868b0;
        }
    }
    ctx->pc = 0x18683Cu;
    // 0x18683c: 0x0
    ctx->pc = 0x18683cu;
    // NOP
label_186840:
    // 0x186840: 0x200202d
    ctx->pc = 0x186840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186844: 0x3a0282d
    ctx->pc = 0x186844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186848: 0x220302d
    ctx->pc = 0x186848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18684c: 0x27a70280
    ctx->pc = 0x18684cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 640));
    // 0x186850: 0xc0610d8
    ctx->pc = 0x186850u;
    SET_GPR_U32(ctx, 31, 0x186858u);
    ctx->pc = 0x186854u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 644));
    ctx->pc = 0x184360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00184360_0x184360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186858u; }
    }
    if (ctx->pc != 0x186858u) { return; }
    ctx->pc = 0x186858u;
    // 0x186858: 0x3c038101
    ctx->pc = 0x186858u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33025 << 16));
    // 0x18685c: 0x34630011
    ctx->pc = 0x18685cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 17));
    // 0x186860: 0x54430014
    ctx->pc = 0x186860u;
    {
        const bool branch_taken_0x186860 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x186860) {
            ctx->pc = 0x186864u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
            ctx->pc = 0x1868B4u;
            goto label_1868b4;
        }
    }
    ctx->pc = 0x186868u;
    // 0x186868: 0x97a20080
    ctx->pc = 0x186868u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18686c: 0x3243180f
    ctx->pc = 0x18686cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 18), 6159));
    // 0x186870: 0x8fa60280
    ctx->pc = 0x186870u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x186874: 0x220282d
    ctx->pc = 0x186874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186878: 0x3042e7f0
    ctx->pc = 0x186878u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 59376));
    // 0x18687c: 0x8fa70284
    ctx->pc = 0x18687cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x186880: 0x431025
    ctx->pc = 0x186880u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x186884: 0x200202d
    ctx->pc = 0x186884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186888: 0xc0612a8
    ctx->pc = 0x186888u;
    SET_GPR_U32(ctx, 31, 0x186890u);
    ctx->pc = 0x18688Cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 128), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x184AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00184AA0_0x184aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186890u; }
    }
    if (ctx->pc != 0x186890u) { return; }
    ctx->pc = 0x186890u;
    // 0x186890: 0x54400008
    ctx->pc = 0x186890u;
    {
        const bool branch_taken_0x186890 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x186890) {
            ctx->pc = 0x186894u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
            ctx->pc = 0x1868B4u;
            goto label_1868b4;
        }
    }
    ctx->pc = 0x186898u;
    // 0x186898: 0xc061bbc
    ctx->pc = 0x186898u;
    SET_GPR_U32(ctx, 31, 0x1868A0u);
    ctx->pc = 0x18689Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00186EF0_0x186ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1868A0u; }
    }
    if (ctx->pc != 0x1868A0u) { return; }
    ctx->pc = 0x1868A0u;
    // 0x1868a0: 0x3c038101
    ctx->pc = 0x1868a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33025 << 16));
    // 0x1868a4: 0x3463006f
    ctx->pc = 0x1868a4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 111));
    // 0x1868a8: 0x2180b
    ctx->pc = 0x1868a8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
    // 0x1868ac: 0x60102d
    ctx->pc = 0x1868acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1868b0:
    // 0x1868b0: 0xdfb00290
    ctx->pc = 0x1868b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_1868b4:
    // 0x1868b4: 0xdfb10298
    ctx->pc = 0x1868b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1868b8: 0xdfb202a0
    ctx->pc = 0x1868b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1868bc: 0xdfbf02a8
    ctx->pc = 0x1868bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x1868c0: 0x3e00008
    ctx->pc = 0x1868C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1868C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 688));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1867D0u: goto label_1867d0;
            case 0x186814u: goto label_186814;
            case 0x186820u: goto label_186820;
            case 0x186840u: goto label_186840;
            case 0x1868B0u: goto label_1868b0;
            case 0x1868B4u: goto label_1868b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1868C8u;
}
