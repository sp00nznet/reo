#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001114B8
// Address: 0x1114b8 - 0x1115d0
void sub_001114B8_0x1114b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1114b8u;

    // 0x1114b8: 0x27bdffe0
    ctx->pc = 0x1114b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1114bc: 0x282d
    ctx->pc = 0x1114bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114c0: 0xffb10008
    ctx->pc = 0x1114c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1114c4: 0x80882d
    ctx->pc = 0x1114c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114c8: 0xffb00000
    ctx->pc = 0x1114c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1114cc: 0xffb20010
    ctx->pc = 0x1114ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1114d0: 0xffbf0018
    ctx->pc = 0x1114d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1114d4: 0xc0448a6
    ctx->pc = 0x1114D4u;
    SET_GPR_U32(ctx, 31, 0x1114DCu);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1114DCu; }
    }
    if (ctx->pc != 0x1114DCu) { return; }
    ctx->pc = 0x1114DCu;
    // 0x1114dc: 0x220202d
    ctx->pc = 0x1114dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114e0: 0x3405f7c0
    ctx->pc = 0x1114e0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 63424));
    // 0x1114e4: 0x52bbc
    ctx->pc = 0x1114e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1114e8: 0x4400033
    ctx->pc = 0x1114E8u;
    {
        const bool branch_taken_0x1114e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1114ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1114e8) {
            ctx->pc = 0x1115B8u;
            goto label_1115b8;
        }
    }
    ctx->pc = 0x1114F0u;
    // 0x1114f0: 0xc04476c
    ctx->pc = 0x1114F0u;
    SET_GPR_U32(ctx, 31, 0x1114F8u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1114F8u; }
    }
    if (ctx->pc != 0x1114F8u) { return; }
    ctx->pc = 0x1114F8u;
    // 0x1114f8: 0x40202d
    ctx->pc = 0x1114f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114fc: 0xc044932
    ctx->pc = 0x1114FCu;
    SET_GPR_U32(ctx, 31, 0x111504u);
    ctx->pc = 0x1124C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001124C8_0x1124c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111504u; }
    }
    if (ctx->pc != 0x111504u) { return; }
    ctx->pc = 0x111504u;
    // 0x111504: 0x2803c
    ctx->pc = 0x111504u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x111508: 0x32020001
    ctx->pc = 0x111508u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
    // 0x11150c: 0x10207a
    ctx->pc = 0x11150cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x111510: 0x6000005
    ctx->pc = 0x111510u;
    {
        const bool branch_taken_0x111510 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x111514u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        if (branch_taken_0x111510) {
            ctx->pc = 0x111528u;
            goto label_111528;
        }
    }
    ctx->pc = 0x111518u;
    // 0x111518: 0xc0444ca
    ctx->pc = 0x111518u;
    SET_GPR_U32(ctx, 31, 0x111520u);
    ctx->pc = 0x11151Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111328u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111328_0x111328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111520u; }
    }
    if (ctx->pc != 0x111520u) { return; }
    ctx->pc = 0x111520u;
    // 0x111520: 0x10000007
    ctx->pc = 0x111520u;
    {
        const bool branch_taken_0x111520 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x111520) {
            ctx->pc = 0x111540u;
            goto label_111540;
        }
    }
    ctx->pc = 0x111528u;
label_111528:
    // 0x111528: 0xc0444ca
    ctx->pc = 0x111528u;
    SET_GPR_U32(ctx, 31, 0x111530u);
    ctx->pc = 0x111328u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111328_0x111328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111530u; }
    }
    if (ctx->pc != 0x111530u) { return; }
    ctx->pc = 0x111530u;
    // 0x111530: 0x40202d
    ctx->pc = 0x111530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111534: 0x80282d
    ctx->pc = 0x111534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111538: 0xc04473c
    ctx->pc = 0x111538u;
    SET_GPR_U32(ctx, 31, 0x111540u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111540u; }
    }
    if (ctx->pc != 0x111540u) { return; }
    ctx->pc = 0x111540u;
label_111540:
    // 0x111540: 0x220202d
    ctx->pc = 0x111540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111544: 0x40282d
    ctx->pc = 0x111544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111548: 0xc044752
    ctx->pc = 0x111548u;
    SET_GPR_U32(ctx, 31, 0x111550u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111550u; }
    }
    if (ctx->pc != 0x111550u) { return; }
    ctx->pc = 0x111550u;
    // 0x111550: 0x902d
    ctx->pc = 0x111550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111554: 0x40882d
    ctx->pc = 0x111554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111558: 0x240282d
    ctx->pc = 0x111558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11155c: 0x220202d
    ctx->pc = 0x11155cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111560: 0xc0448a6
    ctx->pc = 0x111560u;
    SET_GPR_U32(ctx, 31, 0x111568u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111568u; }
    }
    if (ctx->pc != 0x111568u) { return; }
    ctx->pc = 0x111568u;
    // 0x111568: 0x220202d
    ctx->pc = 0x111568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11156c: 0x220282d
    ctx->pc = 0x11156cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111570: 0x441000b
    ctx->pc = 0x111570u;
    {
        const bool branch_taken_0x111570 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x111570) {
            ctx->pc = 0x1115A0u;
            goto label_1115a0;
        }
    }
    ctx->pc = 0x111578u;
    // 0x111578: 0x240202d
    ctx->pc = 0x111578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11157c: 0xc044752
    ctx->pc = 0x11157Cu;
    SET_GPR_U32(ctx, 31, 0x111584u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111584u; }
    }
    if (ctx->pc != 0x111584u) { return; }
    ctx->pc = 0x111584u;
    // 0x111584: 0x40202d
    ctx->pc = 0x111584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111588: 0xc044932
    ctx->pc = 0x111588u;
    SET_GPR_U32(ctx, 31, 0x111590u);
    ctx->pc = 0x1124C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001124C8_0x1124c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111590u; }
    }
    if (ctx->pc != 0x111590u) { return; }
    ctx->pc = 0x111590u;
    // 0x111590: 0x2103c
    ctx->pc = 0x111590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x111594: 0x2103e
    ctx->pc = 0x111594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x111598: 0x10000006
    ctx->pc = 0x111598u;
    {
        const bool branch_taken_0x111598 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11159Cu;
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        if (branch_taken_0x111598) {
            ctx->pc = 0x1115B4u;
            goto label_1115b4;
        }
    }
    ctx->pc = 0x1115A0u;
label_1115a0:
    // 0x1115a0: 0xc044932
    ctx->pc = 0x1115A0u;
    SET_GPR_U32(ctx, 31, 0x1115A8u);
    ctx->pc = 0x1124C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001124C8_0x1124c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1115A8u; }
    }
    if (ctx->pc != 0x1115A8u) { return; }
    ctx->pc = 0x1115A8u;
    // 0x1115a8: 0x2103c
    ctx->pc = 0x1115a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1115ac: 0x2103e
    ctx->pc = 0x1115acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1115b0: 0x202802d
    ctx->pc = 0x1115b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_1115b4:
    // 0x1115b4: 0x200102d
    ctx->pc = 0x1115b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1115b8:
    // 0x1115b8: 0xdfb00000
    ctx->pc = 0x1115b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1115bc: 0xdfb10008
    ctx->pc = 0x1115bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1115c0: 0xdfb20010
    ctx->pc = 0x1115c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1115c4: 0xdfbf0018
    ctx->pc = 0x1115c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1115c8: 0x3e00008
    ctx->pc = 0x1115C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1115CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111528u: goto label_111528;
            case 0x111540u: goto label_111540;
            case 0x1115A0u: goto label_1115a0;
            case 0x1115B4u: goto label_1115b4;
            case 0x1115B8u: goto label_1115b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1115D0u;
}
