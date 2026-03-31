#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00131338
// Address: 0x131338 - 0x131428
void sub_00131338_0x131338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x131338u;

    // 0x131338: 0x27bdffe0
    ctx->pc = 0x131338u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13133c: 0x3c020013
    ctx->pc = 0x13133cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)19 << 16));
    // 0x131340: 0xffb00000
    ctx->pc = 0x131340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131344: 0x3c100024
    ctx->pc = 0x131344u;
    SET_GPR_U32(ctx, 16, ((uint32_t)36 << 16));
    // 0x131348: 0xffb10008
    ctx->pc = 0x131348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13134c: 0x80882d
    ctx->pc = 0x13134cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131350: 0x282d
    ctx->pc = 0x131350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131354: 0xffbf0010
    ctx->pc = 0x131354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x131358: 0xc04daa0
    ctx->pc = 0x131358u;
    SET_GPR_U32(ctx, 31, 0x131360u);
    ctx->pc = 0x13135Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4896));
    ctx->pc = 0x136A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00136A80_0x136a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131360u; }
    }
    if (ctx->pc != 0x131360u) { return; }
    ctx->pc = 0x131360u;
    // 0x131360: 0x2610ae48
    ctx->pc = 0x131360u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294946376));
    // 0x131364: 0x3c050014
    ctx->pc = 0x131364u;
    SET_GPR_U32(ctx, 5, ((uint32_t)20 << 16));
    // 0x131368: 0x24a5af60
    ctx->pc = 0x131368u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294946656));
    // 0x13136c: 0x200202d
    ctx->pc = 0x13136cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131370: 0xc04d4fe
    ctx->pc = 0x131370u;
    SET_GPR_U32(ctx, 31, 0x131378u);
    ctx->pc = 0x131374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1353F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001353F8_0x1353f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131378u; }
    }
    if (ctx->pc != 0x131378u) { return; }
    ctx->pc = 0x131378u;
    // 0x131378: 0xc04d5cc
    ctx->pc = 0x131378u;
    SET_GPR_U32(ctx, 31, 0x131380u);
    ctx->pc = 0x13137Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135730u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135730_0x135730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131380u; }
    }
    if (ctx->pc != 0x131380u) { return; }
    ctx->pc = 0x131380u;
    // 0x131380: 0x1220001d
    ctx->pc = 0x131380u;
    {
        const bool branch_taken_0x131380 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x131384u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x131380) {
            ctx->pc = 0x1313F8u;
            goto label_1313f8;
        }
    }
    ctx->pc = 0x131388u;
    // 0x131388: 0xc04f27a
    ctx->pc = 0x131388u;
    SET_GPR_U32(ctx, 31, 0x131390u);
    ctx->pc = 0x13138Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x13C9E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E8_0x13c9e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131390u; }
    }
    if (ctx->pc != 0x131390u) { return; }
    ctx->pc = 0x131390u;
    // 0x131390: 0xc04f286
    ctx->pc = 0x131390u;
    SET_GPR_U32(ctx, 31, 0x131398u);
    ctx->pc = 0x131394u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x13CA18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CA18_0x13ca18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131398u; }
    }
    if (ctx->pc != 0x131398u) { return; }
    ctx->pc = 0x131398u;
    // 0x131398: 0x8e220008
    ctx->pc = 0x131398u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13139c: 0x14400006
    ctx->pc = 0x13139Cu;
    {
        const bool branch_taken_0x13139c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1313A0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x13139c) {
            ctx->pc = 0x1313B8u;
            goto label_1313b8;
        }
    }
    ctx->pc = 0x1313A4u;
    // 0x1313a4: 0xc04ebc0
    ctx->pc = 0x1313A4u;
    SET_GPR_U32(ctx, 31, 0x1313ACu);
    ctx->pc = 0x1313A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13AF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AF00_0x13af00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1313ACu; }
    }
    if (ctx->pc != 0x1313ACu) { return; }
    ctx->pc = 0x1313ACu;
    // 0x1313ac: 0x10000005
    ctx->pc = 0x1313ACu;
    {
        const bool branch_taken_0x1313ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1313B0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
        if (branch_taken_0x1313ac) {
            ctx->pc = 0x1313C4u;
            goto label_1313c4;
        }
    }
    ctx->pc = 0x1313B4u;
    // 0x1313b4: 0x0
    ctx->pc = 0x1313b4u;
    // NOP
label_1313b8:
    // 0x1313b8: 0xc04ebc0
    ctx->pc = 0x1313B8u;
    SET_GPR_U32(ctx, 31, 0x1313C0u);
    ctx->pc = 0x13AF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AF00_0x13af00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1313C0u; }
    }
    if (ctx->pc != 0x1313C0u) { return; }
    ctx->pc = 0x1313C0u;
    // 0x1313c0: 0x8e22000c
    ctx->pc = 0x1313c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1313c4:
    // 0x1313c4: 0x14400006
    ctx->pc = 0x1313C4u;
    {
        const bool branch_taken_0x1313c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1313C8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1313c4) {
            ctx->pc = 0x1313E0u;
            goto label_1313e0;
        }
    }
    ctx->pc = 0x1313CCu;
    // 0x1313cc: 0x202d
    ctx->pc = 0x1313ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1313d0: 0xdfb10008
    ctx->pc = 0x1313d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1313d4: 0xdfbf0010
    ctx->pc = 0x1313d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1313d8: 0x804ebcc
    ctx->pc = 0x1313D8u;
    ctx->pc = 0x1313DCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x13AF30u;
    entry_13af30_0x13af98(rdram, ctx, runtime); return;
    ctx->pc = 0x1313E0u;
label_1313e0:
    // 0x1313e0: 0x24040001
    ctx->pc = 0x1313e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1313e4: 0xdfb10008
    ctx->pc = 0x1313e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1313e8: 0xdfbf0010
    ctx->pc = 0x1313e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1313ec: 0x804ebcc
    ctx->pc = 0x1313ECu;
    ctx->pc = 0x1313F0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x13AF30u;
    entry_13af30_0x13af98(rdram, ctx, runtime); return;
    ctx->pc = 0x1313F4u;
    // 0x1313f4: 0x0
    ctx->pc = 0x1313f4u;
    // NOP
label_1313f8:
    // 0x1313f8: 0xc04f27a
    ctx->pc = 0x1313F8u;
    SET_GPR_U32(ctx, 31, 0x131400u);
    ctx->pc = 0x13C9E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E8_0x13c9e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131400u; }
    }
    if (ctx->pc != 0x131400u) { return; }
    ctx->pc = 0x131400u;
    // 0x131400: 0xc04f286
    ctx->pc = 0x131400u;
    SET_GPR_U32(ctx, 31, 0x131408u);
    ctx->pc = 0x131404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13CA18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CA18_0x13ca18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131408u; }
    }
    if (ctx->pc != 0x131408u) { return; }
    ctx->pc = 0x131408u;
    // 0x131408: 0xc04ebc0
    ctx->pc = 0x131408u;
    SET_GPR_U32(ctx, 31, 0x131410u);
    ctx->pc = 0x13140Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13AF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AF00_0x13af00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131410u; }
    }
    if (ctx->pc != 0x131410u) { return; }
    ctx->pc = 0x131410u;
    // 0x131410: 0x202d
    ctx->pc = 0x131410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131414: 0xdfb00000
    ctx->pc = 0x131414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131418: 0xdfb10008
    ctx->pc = 0x131418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13141c: 0xdfbf0010
    ctx->pc = 0x13141cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131420: 0x804ebcc
    ctx->pc = 0x131420u;
    ctx->pc = 0x131424u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x13AF30u;
    entry_13af30_0x13af98(rdram, ctx, runtime); return;
    ctx->pc = 0x131428u;
}
