#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019F550
// Address: 0x19f550 - 0x19f6c0
void sub_0019F550_0x19f550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19f550u;

    // 0x19f550: 0x27bdffe0
    ctx->pc = 0x19f550u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19f554: 0xffbf0010
    ctx->pc = 0x19f554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19f558: 0xc06ad58
    ctx->pc = 0x19F558u;
    SET_GPR_U32(ctx, 31, 0x19F560u);
    ctx->pc = 0x19F55Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1AB560u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB560_0x1ab560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F560u; }
    }
    if (ctx->pc != 0x19F560u) { return; }
    ctx->pc = 0x19F560u;
    // 0x19f560: 0xc067d0c
    ctx->pc = 0x19F560u;
    SET_GPR_U32(ctx, 31, 0x19F568u);
    ctx->pc = 0x19F430u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F430_0x19f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F568u; }
    }
    if (ctx->pc != 0x19F568u) { return; }
    ctx->pc = 0x19F568u;
    // 0x19f568: 0x14400003
    ctx->pc = 0x19F568u;
    {
        const bool branch_taken_0x19f568 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19f568) {
            ctx->pc = 0x19F578u;
            goto label_19f578;
        }
    }
    ctx->pc = 0x19F570u;
    // 0x19f570: 0x1000001d
    ctx->pc = 0x19F570u;
    {
        const bool branch_taken_0x19f570 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F574u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19f570) {
            ctx->pc = 0x19F5E8u;
            goto label_19f5e8;
        }
    }
    ctx->pc = 0x19F578u;
label_19f578:
    // 0x19f578: 0xc0449c2
    ctx->pc = 0x19F578u;
    SET_GPR_U32(ctx, 31, 0x19F580u);
    ctx->pc = 0x112708u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112708_0x112708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F580u; }
    }
    if (ctx->pc != 0x19F580u) { return; }
    ctx->pc = 0x19F580u;
    // 0x19f580: 0xc040c22
    ctx->pc = 0x19F580u;
    SET_GPR_U32(ctx, 31, 0x19F588u);
    ctx->pc = 0x19F584u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x103088u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103088_0x103088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F588u; }
    }
    if (ctx->pc != 0x19F588u) { return; }
    ctx->pc = 0x19F588u;
    // 0x19f588: 0x802d
    ctx->pc = 0x19f588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f58c:
    // 0x19f58c: 0xc040c18
    ctx->pc = 0x19F58Cu;
    SET_GPR_U32(ctx, 31, 0x19F594u);
    ctx->pc = 0x19F590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x103060u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103060_0x103060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F594u; }
    }
    if (ctx->pc != 0x19F594u) { return; }
    ctx->pc = 0x19F594u;
    // 0x19f594: 0x3c03002a
    ctx->pc = 0x19f594u;
    SET_GPR_U32(ctx, 3, ((uint32_t)42 << 16));
    // 0x19f598: 0x102080
    ctx->pc = 0x19f598u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 2));
    // 0x19f59c: 0x2463f9b0
    ctx->pc = 0x19f59cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965680));
    // 0x19f5a0: 0x26100001
    ctx->pc = 0x19f5a0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x19f5a4: 0x641821
    ctx->pc = 0x19f5a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19f5a8: 0xac6203c4
    ctx->pc = 0x19f5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 964), GPR_U32(ctx, 2));
    // 0x19f5ac: 0x2a02000a
    ctx->pc = 0x19f5acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 10));
    // 0x19f5b0: 0x1440fff6
    ctx->pc = 0x19F5B0u;
    {
        const bool branch_taken_0x19f5b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19f5b0) {
            ctx->pc = 0x19F58Cu;
            goto label_19f58c;
        }
    }
    ctx->pc = 0x19F5B8u;
    // 0x19f5b8: 0xc06005c
    ctx->pc = 0x19F5B8u;
    SET_GPR_U32(ctx, 31, 0x19F5C0u);
    ctx->pc = 0x180170u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00180170_0x180170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5C0u; }
    }
    if (ctx->pc != 0x19F5C0u) { return; }
    ctx->pc = 0x19F5C0u;
    // 0x19f5c0: 0x3c04002a
    ctx->pc = 0x19f5c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)42 << 16));
    // 0x19f5c4: 0x3c060019
    ctx->pc = 0x19f5c4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)25 << 16));
    // 0x19f5c8: 0x24020001
    ctx->pc = 0x19f5c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f5cc: 0x3c01002a
    ctx->pc = 0x19f5ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19f5d0: 0x2484f6f0
    ctx->pc = 0x19f5d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964976));
    // 0x19f5d4: 0xac22f6f0
    ctx->pc = 0x19f5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964976), GPR_U32(ctx, 2));
    // 0x19f5d8: 0x24051000
    ctx->pc = 0x19f5d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x19f5dc: 0xc06338c
    ctx->pc = 0x19F5DCu;
    SET_GPR_U32(ctx, 31, 0x19F5E4u);
    ctx->pc = 0x19F5E0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294955360));
    ctx->pc = 0x18CE30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018CE30_0x18ce30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5E4u; }
    }
    if (ctx->pc != 0x19F5E4u) { return; }
    ctx->pc = 0x19F5E4u;
    // 0x19f5e4: 0x24020001
    ctx->pc = 0x19f5e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_19f5e8:
    // 0x19f5e8: 0xdfbf0010
    ctx->pc = 0x19f5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f5ec: 0x7bb00000
    ctx->pc = 0x19f5ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f5f0: 0x3e00008
    ctx->pc = 0x19F5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F5F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F578u: goto label_19f578;
            case 0x19F58Cu: goto label_19f58c;
            case 0x19F5E8u: goto label_19f5e8;
            case 0x19F698u: goto label_19f698;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F5F8u;
    // 0x19f5f8: 0x0
    ctx->pc = 0x19f5f8u;
    // NOP
    // 0x19f5fc: 0x0
    ctx->pc = 0x19f5fcu;
    // NOP
    // 0x19f600: 0x27bdfff0
    ctx->pc = 0x19f600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f604: 0x3c01002a
    ctx->pc = 0x19f604u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19f608: 0xffbf0000
    ctx->pc = 0x19f608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f60c: 0x8c24fa0c
    ctx->pc = 0x19f60cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294965772)));
    // 0x19f610: 0x3c010029
    ctx->pc = 0x19f610u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x19f614: 0x24840001
    ctx->pc = 0x19f614u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x19f618: 0x8c234170
    ctx->pc = 0x19f618u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 16752)));
    // 0x19f61c: 0x3c01002a
    ctx->pc = 0x19f61cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19f620: 0x24630001
    ctx->pc = 0x19f620u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x19f624: 0x8c22fa04
    ctx->pc = 0x19f624u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294965764)));
    // 0x19f628: 0x3c01002a
    ctx->pc = 0x19f628u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19f62c: 0xac24fa0c
    ctx->pc = 0x19f62cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965772), GPR_U32(ctx, 4));
    // 0x19f630: 0x3c010029
    ctx->pc = 0x19f630u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x19f634: 0xac234170
    ctx->pc = 0x19f634u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16752), GPR_U32(ctx, 3));
    // 0x19f638: 0x3c01002a
    ctx->pc = 0x19f638u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19f63c: 0x8c23fa0c
    ctx->pc = 0x19f63cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294965772)));
    // 0x19f640: 0x43082a
    ctx->pc = 0x19f640u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x19f644: 0x10200014
    ctx->pc = 0x19F644u;
    {
        const bool branch_taken_0x19f644 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F648u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x19f644) {
            ctx->pc = 0x19F698u;
            goto label_19f698;
        }
    }
    ctx->pc = 0x19F64Cu;
    // 0x19f64c: 0x24020001
    ctx->pc = 0x19f64cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f650: 0x8c23fa10
    ctx->pc = 0x19f650u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294965776)));
    // 0x19f654: 0x14620010
    ctx->pc = 0x19F654u;
    {
        const bool branch_taken_0x19f654 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x19f654) {
            ctx->pc = 0x19F698u;
            goto label_19f698;
        }
    }
    ctx->pc = 0x19F65Cu;
    // 0x19f65c: 0x3c01002a
    ctx->pc = 0x19f65cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19f660: 0xac20fa10
    ctx->pc = 0x19f660u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965776), GPR_U32(ctx, 0));
    // 0x19f664: 0x3c01002a
    ctx->pc = 0x19f664u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19f668: 0x8c23fa08
    ctx->pc = 0x19f668u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294965768)));
    // 0x19f66c: 0x3c01002a
    ctx->pc = 0x19f66cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19f670: 0x8c22fa00
    ctx->pc = 0x19f670u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294965760)));
    // 0x19f674: 0x3c01002a
    ctx->pc = 0x19f674u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19f678: 0x38420001
    ctx->pc = 0x19f678u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x19f67c: 0xac23fa04
    ctx->pc = 0x19f67cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965764), GPR_U32(ctx, 3));
    // 0x19f680: 0x3c01002a
    ctx->pc = 0x19f680u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19f684: 0xac22fa00
    ctx->pc = 0x19f684u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965760), GPR_U32(ctx, 2));
    // 0x19f688: 0x3c01002a
    ctx->pc = 0x19f688u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19f68c: 0x8c24fa00
    ctx->pc = 0x19f68cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294965760)));
    // 0x19f690: 0xc0680d4
    ctx->pc = 0x19F690u;
    SET_GPR_U32(ctx, 31, 0x19F698u);
    ctx->pc = 0x19F694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0350u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0350_0x1a0350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F698u; }
    }
    if (ctx->pc != 0x19F698u) { return; }
    ctx->pc = 0x19F698u;
label_19f698:
    // 0x19f698: 0xc06a410
    ctx->pc = 0x19F698u;
    SET_GPR_U32(ctx, 31, 0x19F6A0u);
    ctx->pc = 0x1A9040u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9040_0x1a9040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F6A0u; }
    }
    if (ctx->pc != 0x19F6A0u) { return; }
    ctx->pc = 0x19F6A0u;
    // 0x19f6a0: 0xf
    ctx->pc = 0x19f6a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x19f6a4: 0x42000038
    ctx->pc = 0x19f6a4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x19f6a8: 0xdfbf0000
    ctx->pc = 0x19f6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f6ac: 0x3e00008
    ctx->pc = 0x19F6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F6B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F578u: goto label_19f578;
            case 0x19F58Cu: goto label_19f58c;
            case 0x19F5E8u: goto label_19f5e8;
            case 0x19F698u: goto label_19f698;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F6B4u;
    // 0x19f6b4: 0x0
    ctx->pc = 0x19f6b4u;
    // NOP
    // 0x19f6b8: 0x0
    ctx->pc = 0x19f6b8u;
    // NOP
    // 0x19f6bc: 0x0
    ctx->pc = 0x19f6bcu;
    // NOP
}
