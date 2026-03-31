#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016C7F0
// Address: 0x16c7f0 - 0x16ca00
void sub_0016C7F0_0x16c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16c7f0u;

    // 0x16c7f0: 0x27bdffa0
    ctx->pc = 0x16c7f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16c7f4: 0xffb10038
    ctx->pc = 0x16c7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x16c7f8: 0x80882d
    ctx->pc = 0x16c7f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c7fc: 0xffb20040
    ctx->pc = 0x16c7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x16c800: 0xc0902d
    ctx->pc = 0x16c800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c804: 0xffb30048
    ctx->pc = 0x16c804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x16c808: 0xa0982d
    ctx->pc = 0x16c808u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c80c: 0xffb00030
    ctx->pc = 0x16c80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16c810: 0x3a0302d
    ctx->pc = 0x16c810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c814: 0xffbf0050
    ctx->pc = 0x16c814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x16c818: 0xae600000
    ctx->pc = 0x16c818u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x16c81c: 0x8e301b38
    ctx->pc = 0x16c81cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 6968)));
    // 0x16c820: 0xae400000
    ctx->pc = 0x16c820u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x16c824: 0xc059bfa
    ctx->pc = 0x16C824u;
    SET_GPR_U32(ctx, 31, 0x16C82Cu);
    ctx->pc = 0x16C828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x166FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166FE8_0x166fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C82Cu; }
    }
    if (ctx->pc != 0x16C82Cu) { return; }
    ctx->pc = 0x16C82Cu;
    // 0x16c82c: 0x5440006d
    ctx->pc = 0x16C82Cu;
    {
        const bool branch_taken_0x16c82c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16c82c) {
            ctx->pc = 0x16C830u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->pc = 0x16C9E4u;
            goto label_16c9e4;
        }
    }
    ctx->pc = 0x16C834u;
    // 0x16c834: 0x8fa30004
    ctx->pc = 0x16c834u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16c838: 0x10600069
    ctx->pc = 0x16C838u;
    {
        const bool branch_taken_0x16c838 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C83Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 206));
        if (branch_taken_0x16c838) {
            ctx->pc = 0x16C9E0u;
            goto label_16c9e0;
        }
    }
    ctx->pc = 0x16C840u;
    // 0x16c840: 0x3a0202d
    ctx->pc = 0x16c840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c844: 0xc05b326
    ctx->pc = 0x16C844u;
    SET_GPR_U32(ctx, 31, 0x16C84Cu);
    ctx->pc = 0x16C848u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x16CC98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CC98_0x16cc98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C84Cu; }
    }
    if (ctx->pc != 0x16C84Cu) { return; }
    ctx->pc = 0x16C84Cu;
    // 0x16c84c: 0x40282d
    ctx->pc = 0x16c84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c850: 0x8fa20000
    ctx->pc = 0x16c850u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c854: 0x10a2000a
    ctx->pc = 0x16C854u;
    {
        const bool branch_taken_0x16c854 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x16C858u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x16c854) {
            ctx->pc = 0x16C880u;
            goto label_16c880;
        }
    }
    ctx->pc = 0x16C85Cu;
    // 0x16c85c: 0x14a0005c
    ctx->pc = 0x16C85Cu;
    {
        const bool branch_taken_0x16c85c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x16C860u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
        if (branch_taken_0x16c85c) {
            ctx->pc = 0x16C9D0u;
            goto label_16c9d0;
        }
    }
    ctx->pc = 0x16C864u;
    // 0x16c864: 0x8fa20004
    ctx->pc = 0x16c864u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16c868: 0x431021
    ctx->pc = 0x16c868u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16c86c: 0x2442fffd
    ctx->pc = 0x16c86cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x16c870: 0x28430000
    ctx->pc = 0x16c870u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 0));
    // 0x16c874: 0x10000058
    ctx->pc = 0x16C874u;
    {
        const bool branch_taken_0x16c874 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C878u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
        if (branch_taken_0x16c874) {
            ctx->pc = 0x16C9D8u;
            goto label_16c9d8;
        }
    }
    ctx->pc = 0x16C87Cu;
    // 0x16c87c: 0x0
    ctx->pc = 0x16c87cu;
    // NOP
label_16c880:
    // 0x16c880: 0x24020004
    ctx->pc = 0x16c880u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x16c884: 0xae620000
    ctx->pc = 0x16c884u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x16c888: 0x102d
    ctx->pc = 0x16c888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c88c: 0x30640080
    ctx->pc = 0x16c88cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 128));
    // 0x16c890: 0x14800053
    ctx->pc = 0x16C890u;
    {
        const bool branch_taken_0x16c890 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x16C894u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x16c890) {
            ctx->pc = 0x16C9E0u;
            goto label_16c9e0;
        }
    }
    ctx->pc = 0x16C898u;
    // 0x16c898: 0x200282d
    ctx->pc = 0x16c898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c89c: 0x27a60024
    ctx->pc = 0x16c89cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 36));
    // 0x16c8a0: 0x220202d
    ctx->pc = 0x16c8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c8a4: 0xc059d0c
    ctx->pc = 0x16C8A4u;
    SET_GPR_U32(ctx, 31, 0x16C8ACu);
    ctx->pc = 0x16C8A8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 40));
    ctx->pc = 0x167430u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167430_0x167430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C8ACu; }
    }
    if (ctx->pc != 0x16C8ACu) { return; }
    ctx->pc = 0x16C8ACu;
    // 0x16c8ac: 0x8fa50020
    ctx->pc = 0x16c8acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c8b0: 0x3a0202d
    ctx->pc = 0x16c8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c8b4: 0xc05b280
    ctx->pc = 0x16C8B4u;
    SET_GPR_U32(ctx, 31, 0x16C8BCu);
    ctx->pc = 0x16C8B8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->pc = 0x16CA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CA00_0x16ca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C8BCu; }
    }
    if (ctx->pc != 0x16C8BCu) { return; }
    ctx->pc = 0x16C8BCu;
    // 0x16c8bc: 0x10400017
    ctx->pc = 0x16C8BCu;
    {
        const bool branch_taken_0x16c8bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C8C0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
        if (branch_taken_0x16c8bc) {
            ctx->pc = 0x16C91Cu;
            goto label_16c91c;
        }
    }
    ctx->pc = 0x16C8C4u;
    // 0x16c8c4: 0x14600006
    ctx->pc = 0x16C8C4u;
    {
        const bool branch_taken_0x16c8c4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x16C8C8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        if (branch_taken_0x16c8c4) {
            ctx->pc = 0x16C8E0u;
            goto label_16c8e0;
        }
    }
    ctx->pc = 0x16C8CCu;
    // 0x16c8cc: 0x8fa30000
    ctx->pc = 0x16c8ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c8d0: 0x8fa20004
    ctx->pc = 0x16c8d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16c8d4: 0x10000004
    ctx->pc = 0x16C8D4u;
    {
        const bool branch_taken_0x16c8d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C8D8u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x16c8d4) {
            ctx->pc = 0x16C8E8u;
            goto label_16c8e8;
        }
    }
    ctx->pc = 0x16C8DCu;
    // 0x16c8dc: 0x0
    ctx->pc = 0x16c8dcu;
    // NOP
label_16c8e0:
    // 0x16c8e0: 0x8fa20008
    ctx->pc = 0x16c8e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c8e4: 0x431821
    ctx->pc = 0x16c8e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16c8e8:
    // 0x16c8e8: 0x8fa20028
    ctx->pc = 0x16c8e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16c8ec: 0x1043000b
    ctx->pc = 0x16C8ECu;
    {
        const bool branch_taken_0x16c8ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x16C8F0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16c8ec) {
            ctx->pc = 0x16C91Cu;
            goto label_16c91c;
        }
    }
    ctx->pc = 0x16C8F4u;
    // 0x16c8f4: 0x240500cc
    ctx->pc = 0x16c8f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 204));
    // 0x16c8f8: 0x27a6002c
    ctx->pc = 0x16c8f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 44));
    // 0x16c8fc: 0xc05b37c
    ctx->pc = 0x16C8FCu;
    SET_GPR_U32(ctx, 31, 0x16C904u);
    ctx->pc = 0x16C900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    ctx->pc = 0x16CDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CDF0_0x16cdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C904u; }
    }
    if (ctx->pc != 0x16C904u) { return; }
    ctx->pc = 0x16C904u;
    // 0x16c904: 0x220202d
    ctx->pc = 0x16c904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c908: 0x8fa70028
    ctx->pc = 0x16c908u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16c90c: 0x200282d
    ctx->pc = 0x16c90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c910: 0x40302d
    ctx->pc = 0x16c910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c914: 0xc059d28
    ctx->pc = 0x16C914u;
    SET_GPR_U32(ctx, 31, 0x16C91Cu);
    ctx->pc = 0x16C918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->pc = 0x1674A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001674A0_0x1674a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C91Cu; }
    }
    if (ctx->pc != 0x16C91Cu) { return; }
    ctx->pc = 0x16C91Cu;
label_16c91c:
    // 0x16c91c: 0x8fa40024
    ctx->pc = 0x16c91cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x16c920: 0x10800024
    ctx->pc = 0x16C920u;
    {
        const bool branch_taken_0x16c920 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x16c920) {
            ctx->pc = 0x16C9B4u;
            goto label_16c9b4;
        }
    }
    ctx->pc = 0x16C928u;
    // 0x16c928: 0xc05616e
    ctx->pc = 0x16C928u;
    SET_GPR_U32(ctx, 31, 0x16C930u);
    ctx->pc = 0x1585B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001585B8_0x1585b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C930u; }
    }
    if (ctx->pc != 0x16C930u) { return; }
    ctx->pc = 0x16C930u;
    // 0x16c930: 0x40202d
    ctx->pc = 0x16c930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c934: 0x24020008
    ctx->pc = 0x16c934u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x16c938: 0x80182d
    ctx->pc = 0x16c938u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c93c: 0x1062000a
    ctx->pc = 0x16C93Cu;
    {
        const bool branch_taken_0x16c93c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16C940u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
        if (branch_taken_0x16c93c) {
            ctx->pc = 0x16C968u;
            goto label_16c968;
        }
    }
    ctx->pc = 0x16C944u;
    // 0x16c944: 0x2c620009
    ctx->pc = 0x16c944u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 9));
    // 0x16c948: 0x1040001f
    ctx->pc = 0x16C948u;
    {
        const bool branch_taken_0x16c948 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C94Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x16c948) {
            ctx->pc = 0x16C9C8u;
            goto label_16c9c8;
        }
    }
    ctx->pc = 0x16C950u;
    // 0x16c950: 0x24020004
    ctx->pc = 0x16c950u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x16c954: 0x1062000a
    ctx->pc = 0x16C954u;
    {
        const bool branch_taken_0x16c954 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16C958u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x16c954) {
            ctx->pc = 0x16C980u;
            goto label_16c980;
        }
    }
    ctx->pc = 0x16C95Cu;
    // 0x16c95c: 0x1000001c
    ctx->pc = 0x16C95Cu;
    {
        const bool branch_taken_0x16c95c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C960u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16c95c) {
            ctx->pc = 0x16C9D0u;
            goto label_16c9d0;
        }
    }
    ctx->pc = 0x16C964u;
    // 0x16c964: 0x0
    ctx->pc = 0x16c964u;
    // NOP
label_16c968:
    // 0x16c968: 0x8fa20020
    ctx->pc = 0x16c968u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c96c: 0x30420040
    ctx->pc = 0x16c96cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x16c970: 0x10400015
    ctx->pc = 0x16C970u;
    {
        const bool branch_taken_0x16c970 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C974u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x16c970) {
            ctx->pc = 0x16C9C8u;
            goto label_16c9c8;
        }
    }
    ctx->pc = 0x16C978u;
    // 0x16c978: 0x10000006
    ctx->pc = 0x16C978u;
    {
        const bool branch_taken_0x16c978 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C97Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16c978) {
            ctx->pc = 0x16C994u;
            goto label_16c994;
        }
    }
    ctx->pc = 0x16C980u;
label_16c980:
    // 0x16c980: 0x8fa20020
    ctx->pc = 0x16c980u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c984: 0x30420048
    ctx->pc = 0x16c984u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 72));
    // 0x16c988: 0x1040000f
    ctx->pc = 0x16C988u;
    {
        const bool branch_taken_0x16c988 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C98Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x16c988) {
            ctx->pc = 0x16C9C8u;
            goto label_16c9c8;
        }
    }
    ctx->pc = 0x16C990u;
    // 0x16c990: 0x3a0202d
    ctx->pc = 0x16c990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16c994:
    // 0x16c994: 0xc05b326
    ctx->pc = 0x16C994u;
    SET_GPR_U32(ctx, 31, 0x16C99Cu);
    ctx->pc = 0x16C998u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x16CC98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CC98_0x16cc98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C99Cu; }
    }
    if (ctx->pc != 0x16C99Cu) { return; }
    ctx->pc = 0x16C99Cu;
    // 0x16c99c: 0x40282d
    ctx->pc = 0x16c99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c9a0: 0x10a00004
    ctx->pc = 0x16C9A0u;
    {
        const bool branch_taken_0x16c9a0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x16c9a0) {
            ctx->pc = 0x16C9B4u;
            goto label_16c9b4;
        }
    }
    ctx->pc = 0x16C9A8u;
    // 0x16c9a8: 0x8fa20024
    ctx->pc = 0x16c9a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x16c9ac: 0x14a20008
    ctx->pc = 0x16C9ACu;
    {
        const bool branch_taken_0x16c9ac = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x16C9B0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16c9ac) {
            ctx->pc = 0x16C9D0u;
            goto label_16c9d0;
        }
    }
    ctx->pc = 0x16C9B4u;
label_16c9b4:
    // 0x16c9b4: 0xc05b304
    ctx->pc = 0x16C9B4u;
    SET_GPR_U32(ctx, 31, 0x16C9BCu);
    ctx->pc = 0x16C9B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16CC10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CC10_0x16cc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C9BCu; }
    }
    if (ctx->pc != 0x16C9BCu) { return; }
    ctx->pc = 0x16C9BCu;
    // 0x16c9bc: 0x10000009
    ctx->pc = 0x16C9BCu;
    {
        const bool branch_taken_0x16c9bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C9C0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x16c9bc) {
            ctx->pc = 0x16C9E4u;
            goto label_16c9e4;
        }
    }
    ctx->pc = 0x16C9C4u;
    // 0x16c9c4: 0x0
    ctx->pc = 0x16c9c4u;
    // NOP
label_16c9c8:
    // 0x16c9c8: 0x8fa20024
    ctx->pc = 0x16c9c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x16c9cc: 0x40282d
    ctx->pc = 0x16c9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16c9d0:
    // 0x16c9d0: 0xc05b2ea
    ctx->pc = 0x16C9D0u;
    SET_GPR_U32(ctx, 31, 0x16C9D8u);
    ctx->pc = 0x16C9D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16CBA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CBA8_0x16cba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C9D8u; }
    }
    if (ctx->pc != 0x16C9D8u) { return; }
    ctx->pc = 0x16C9D8u;
label_16c9d8:
    // 0x16c9d8: 0xae620000
    ctx->pc = 0x16c9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x16c9dc: 0x102d
    ctx->pc = 0x16c9dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c9e0:
    // 0x16c9e0: 0xdfb00030
    ctx->pc = 0x16c9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16c9e4:
    // 0x16c9e4: 0xdfb10038
    ctx->pc = 0x16c9e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16c9e8: 0xdfb20040
    ctx->pc = 0x16c9e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16c9ec: 0xdfb30048
    ctx->pc = 0x16c9ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16c9f0: 0xdfbf0050
    ctx->pc = 0x16c9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16c9f4: 0x3e00008
    ctx->pc = 0x16C9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C9F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C880u: goto label_16c880;
            case 0x16C8E0u: goto label_16c8e0;
            case 0x16C8E8u: goto label_16c8e8;
            case 0x16C91Cu: goto label_16c91c;
            case 0x16C968u: goto label_16c968;
            case 0x16C980u: goto label_16c980;
            case 0x16C994u: goto label_16c994;
            case 0x16C9B4u: goto label_16c9b4;
            case 0x16C9C8u: goto label_16c9c8;
            case 0x16C9D0u: goto label_16c9d0;
            case 0x16C9D8u: goto label_16c9d8;
            case 0x16C9E0u: goto label_16c9e0;
            case 0x16C9E4u: goto label_16c9e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C9FCu;
    // 0x16c9fc: 0x0
    ctx->pc = 0x16c9fcu;
    // NOP
}
