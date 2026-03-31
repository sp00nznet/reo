#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00164418
// Address: 0x164418 - 0x164510
void sub_00164418_0x164418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x164418u;

    // 0x164418: 0x3e00008
    ctx->pc = 0x164418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16441Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16443Cu: goto label_16443c;
            case 0x164480u: goto label_164480;
            case 0x1644A8u: goto label_1644a8;
            case 0x1644DCu: goto label_1644dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x164420u;
    // 0x164420: 0x27bdfff0
    ctx->pc = 0x164420u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164424: 0x102d
    ctx->pc = 0x164424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164428: 0x10800004
    ctx->pc = 0x164428u;
    {
        const bool branch_taken_0x164428 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x16442Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x164428) {
            ctx->pc = 0x16443Cu;
            goto label_16443c;
        }
    }
    ctx->pc = 0x164430u;
    // 0x164430: 0xc04c38a
    ctx->pc = 0x164430u;
    SET_GPR_U32(ctx, 31, 0x164438u);
    ctx->pc = 0x130E28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130E28_0x130e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164438u; }
    }
    if (ctx->pc != 0x164438u) { return; }
    ctx->pc = 0x164438u;
    // 0x164438: 0x102d
    ctx->pc = 0x164438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16443c:
    // 0x16443c: 0xdfbf0000
    ctx->pc = 0x16443cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164440: 0x3e00008
    ctx->pc = 0x164440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164444u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16443Cu: goto label_16443c;
            case 0x164480u: goto label_164480;
            case 0x1644A8u: goto label_1644a8;
            case 0x1644DCu: goto label_1644dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x164448u;
    // 0x164448: 0x3e00008
    ctx->pc = 0x164448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16444Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16443Cu: goto label_16443c;
            case 0x164480u: goto label_164480;
            case 0x1644A8u: goto label_1644a8;
            case 0x1644DCu: goto label_1644dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x164450u;
    // 0x164450: 0x27bdffe0
    ctx->pc = 0x164450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x164454: 0xffb00000
    ctx->pc = 0x164454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164458: 0x80802d
    ctx->pc = 0x164458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16445c: 0xffb10008
    ctx->pc = 0x16445cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x164460: 0xa0882d
    ctx->pc = 0x164460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164464: 0x14c00006
    ctx->pc = 0x164464u;
    {
        const bool branch_taken_0x164464 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x164468u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x164464) {
            ctx->pc = 0x164480u;
            goto label_164480;
        }
    }
    ctx->pc = 0x16446Cu;
    // 0x16446c: 0xc04c170
    ctx->pc = 0x16446Cu;
    SET_GPR_U32(ctx, 31, 0x164474u);
    ctx->pc = 0x1305C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001305C0_0x1305c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164474u; }
    }
    if (ctx->pc != 0x164474u) { return; }
    ctx->pc = 0x164474u;
    // 0x164474: 0x10000019
    ctx->pc = 0x164474u;
    {
        const bool branch_taken_0x164474 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x164478u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x164474) {
            ctx->pc = 0x1644DCu;
            goto label_1644dc;
        }
    }
    ctx->pc = 0x16447Cu;
    // 0x16447c: 0x0
    ctx->pc = 0x16447cu;
    // NOP
label_164480:
    // 0x164480: 0x24020001
    ctx->pc = 0x164480u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x164484: 0x54c20008
    ctx->pc = 0x164484u;
    {
        const bool branch_taken_0x164484 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        if (branch_taken_0x164484) {
            ctx->pc = 0x164488u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x1644A8u;
            goto label_1644a8;
        }
    }
    ctx->pc = 0x16448Cu;
    // 0x16448c: 0xc04c182
    ctx->pc = 0x16448Cu;
    SET_GPR_U32(ctx, 31, 0x164494u);
    ctx->pc = 0x130608u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130608_0x130608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164494u; }
    }
    if (ctx->pc != 0x164494u) { return; }
    ctx->pc = 0x164494u;
    // 0x164494: 0x200202d
    ctx->pc = 0x164494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164498: 0xc04c170
    ctx->pc = 0x164498u;
    SET_GPR_U32(ctx, 31, 0x1644A0u);
    ctx->pc = 0x16449Cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1305C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001305C0_0x1305c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1644A0u; }
    }
    if (ctx->pc != 0x1644A0u) { return; }
    ctx->pc = 0x1644A0u;
    // 0x1644a0: 0x1000000e
    ctx->pc = 0x1644A0u;
    {
        const bool branch_taken_0x1644a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1644A4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1644a0) {
            ctx->pc = 0x1644DCu;
            goto label_1644dc;
        }
    }
    ctx->pc = 0x1644A8u;
label_1644a8:
    // 0x1644a8: 0x54c2000c
    ctx->pc = 0x1644A8u;
    {
        const bool branch_taken_0x1644a8 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        if (branch_taken_0x1644a8) {
            ctx->pc = 0x1644ACu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1644DCu;
            goto label_1644dc;
        }
    }
    ctx->pc = 0x1644B0u;
    // 0x1644b0: 0xc04c390
    ctx->pc = 0x1644B0u;
    SET_GPR_U32(ctx, 31, 0x1644B8u);
    ctx->pc = 0x130E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130E40_0x130e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1644B8u; }
    }
    if (ctx->pc != 0x1644B8u) { return; }
    ctx->pc = 0x1644B8u;
    // 0x1644b8: 0x200202d
    ctx->pc = 0x1644b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1644bc: 0x244507ff
    ctx->pc = 0x1644bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 2047));
    // 0x1644c0: 0x24420ffe
    ctx->pc = 0x1644c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4094));
    // 0x1644c4: 0x28a30000
    ctx->pc = 0x1644c4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 0));
    // 0x1644c8: 0x43280b
    ctx->pc = 0x1644c8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
    // 0x1644cc: 0x52ac3
    ctx->pc = 0x1644ccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
    // 0x1644d0: 0xc04c170
    ctx->pc = 0x1644D0u;
    SET_GPR_U32(ctx, 31, 0x1644D8u);
    ctx->pc = 0x1644D4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->pc = 0x1305C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001305C0_0x1305c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1644D8u; }
    }
    if (ctx->pc != 0x1644D8u) { return; }
    ctx->pc = 0x1644D8u;
    // 0x1644d8: 0xdfb00000
    ctx->pc = 0x1644d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1644dc:
    // 0x1644dc: 0x102d
    ctx->pc = 0x1644dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1644e0: 0xdfb10008
    ctx->pc = 0x1644e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1644e4: 0xdfbf0010
    ctx->pc = 0x1644e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1644e8: 0x3e00008
    ctx->pc = 0x1644E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1644ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16443Cu: goto label_16443c;
            case 0x164480u: goto label_164480;
            case 0x1644A8u: goto label_1644a8;
            case 0x1644DCu: goto label_1644dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1644F0u;
    // 0x1644f0: 0x27bdfff0
    ctx->pc = 0x1644f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1644f4: 0xffbf0000
    ctx->pc = 0x1644f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1644f8: 0xc04c196
    ctx->pc = 0x1644F8u;
    SET_GPR_U32(ctx, 31, 0x164500u);
    ctx->pc = 0x130658u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130658_0x130658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164500u; }
    }
    if (ctx->pc != 0x164500u) { return; }
    ctx->pc = 0x164500u;
    // 0x164500: 0xdfbf0000
    ctx->pc = 0x164500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164504: 0x102d
    ctx->pc = 0x164504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164508: 0x3e00008
    ctx->pc = 0x164508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16450Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16443Cu: goto label_16443c;
            case 0x164480u: goto label_164480;
            case 0x1644A8u: goto label_1644a8;
            case 0x1644DCu: goto label_1644dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x164510u;
}
