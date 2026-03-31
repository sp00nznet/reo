#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013C3A0
// Address: 0x13c3a0 - 0x13c590
void sub_0013C3A0_0x13c3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13c3a0u;

    // 0x13c3a0: 0x27bdfeb0
    ctx->pc = 0x13c3a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x13c3a4: 0x24060100
    ctx->pc = 0x13c3a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x13c3a8: 0xffb40120
    ctx->pc = 0x13c3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x13c3ac: 0xa0a02d
    ctx->pc = 0x13c3acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c3b0: 0xffb50128
    ctx->pc = 0x13c3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x13c3b4: 0x80a82d
    ctx->pc = 0x13c3b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c3b8: 0x282d
    ctx->pc = 0x13c3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c3bc: 0x3a0202d
    ctx->pc = 0x13c3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c3c0: 0xffb30118
    ctx->pc = 0x13c3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x13c3c4: 0x982d
    ctx->pc = 0x13c3c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c3c8: 0xffb60130
    ctx->pc = 0x13c3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x13c3cc: 0xb02d
    ctx->pc = 0x13c3ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c3d0: 0xffbe0140
    ctx->pc = 0x13c3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x13c3d4: 0xffb00100
    ctx->pc = 0x13c3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x13c3d8: 0xffb10108
    ctx->pc = 0x13c3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x13c3dc: 0xffb20110
    ctx->pc = 0x13c3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x13c3e0: 0xffb70138
    ctx->pc = 0x13c3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x13c3e4: 0xffbf0148
    ctx->pc = 0x13c3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x13c3e8: 0xc041f1a
    ctx->pc = 0x13C3E8u;
    SET_GPR_U32(ctx, 31, 0x13C3F0u);
    ctx->pc = 0x13C3ECu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C3F0u; }
    }
    if (ctx->pc != 0x13C3F0u) { return; }
    ctx->pc = 0x13C3F0u;
    // 0x13c3f0: 0x2a83000e
    ctx->pc = 0x13c3f0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), 14));
    // 0x13c3f4: 0x2402000d
    ctx->pc = 0x13c3f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x13c3f8: 0x43a00a
    ctx->pc = 0x13c3f8u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 2));
    // 0x13c3fc: 0x1a800046
    ctx->pc = 0x13C3FCu;
    {
        const bool branch_taken_0x13c3fc = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x13C400u;
        SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
        if (branch_taken_0x13c3fc) {
            ctx->pc = 0x13C518u;
            goto label_13c518;
        }
    }
    ctx->pc = 0x13C404u;
    // 0x13c404: 0x3c020022
    ctx->pc = 0x13c404u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13c408: 0x2a0902d
    ctx->pc = 0x13c408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c40c: 0x2457de90
    ctx->pc = 0x13c40cu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 4294958736));
label_13c410:
    // 0x13c410: 0x8ee3000c
    ctx->pc = 0x13c410u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x13c414: 0x3a0282d
    ctx->pc = 0x13c414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c418: 0x8ee20008
    ctx->pc = 0x13c418u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x13c41c: 0x732018
    ctx->pc = 0x13c41cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x13c420: 0x210c0
    ctx->pc = 0x13c420u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x13c424: 0x931821
    ctx->pc = 0x13c424u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x13c428: 0x26730001
    ctx->pc = 0x13c428u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x13c42c: 0x431021
    ctx->pc = 0x13c42cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13c430: 0x2a28821
    ctx->pc = 0x13c430u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x13c434: 0xc04efa0
    ctx->pc = 0x13C434u;
    SET_GPR_U32(ctx, 31, 0x13C43Cu);
    ctx->pc = 0x13C438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13BE80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013BE80_0x13be80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C43Cu; }
    }
    if (ctx->pc != 0x13C43Cu) { return; }
    ctx->pc = 0x13C43Cu;
    // 0x13c43c: 0x82220000
    ctx->pc = 0x13c43cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13c440: 0x10400031
    ctx->pc = 0x13C440u;
    {
        const bool branch_taken_0x13c440 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13C444u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26112));
        if (branch_taken_0x13c440) {
            ctx->pc = 0x13C508u;
            goto label_13c508;
        }
    }
    ctx->pc = 0x13C448u;
    // 0x13c448: 0xc04e082
    ctx->pc = 0x13C448u;
    SET_GPR_U32(ctx, 31, 0x13C450u);
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C450u; }
    }
    if (ctx->pc != 0x13C450u) { return; }
    ctx->pc = 0x13C450u;
    // 0x13c450: 0x24050001
    ctx->pc = 0x13c450u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c454: 0xc04e146
    ctx->pc = 0x13C454u;
    SET_GPR_U32(ctx, 31, 0x13C45Cu);
    ctx->pc = 0x13C458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138518u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138518_0x138518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C45Cu; }
    }
    if (ctx->pc != 0x13C45Cu) { return; }
    ctx->pc = 0x13C45Cu;
    // 0x13c45c: 0x24046601
    ctx->pc = 0x13c45cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26113));
    // 0x13c460: 0xc04e082
    ctx->pc = 0x13C460u;
    SET_GPR_U32(ctx, 31, 0x13C468u);
    ctx->pc = 0x13C464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C468u; }
    }
    if (ctx->pc != 0x13C468u) { return; }
    ctx->pc = 0x13C468u;
    // 0x13c468: 0x601000b
    ctx->pc = 0x13C468u;
    {
        const bool branch_taken_0x13c468 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x13C46Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13c468) {
            ctx->pc = 0x13C498u;
            goto label_13c498;
        }
    }
    ctx->pc = 0x13C470u;
    // 0x13c470: 0x3c030022
    ctx->pc = 0x13c470u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x13c474: 0x8c62dea4
    ctx->pc = 0x13c474u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294958756)));
    // 0x13c478: 0x54400023
    ctx->pc = 0x13C478u;
    {
        const bool branch_taken_0x13c478 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13c478) {
            ctx->pc = 0x13C47Cu;
            SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 1));
            ctx->pc = 0x13C508u;
            goto label_13c508;
        }
    }
    ctx->pc = 0x13C480u;
    // 0x13c480: 0x3c020024
    ctx->pc = 0x13c480u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x13c484: 0x3a0282d
    ctx->pc = 0x13c484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c488: 0xc045a12
    ctx->pc = 0x13C488u;
    SET_GPR_U32(ctx, 31, 0x13C490u);
    ctx->pc = 0x13C48Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294955352));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C490u; }
    }
    if (ctx->pc != 0x13C490u) { return; }
    ctx->pc = 0x13C490u;
    // 0x13c490: 0x1000001d
    ctx->pc = 0x13C490u;
    {
        const bool branch_taken_0x13c490 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13C494u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 1));
        if (branch_taken_0x13c490) {
            ctx->pc = 0x13C508u;
            goto label_13c508;
        }
    }
    ctx->pc = 0x13C498u;
label_13c498:
    // 0x13c498: 0xae500000
    ctx->pc = 0x13c498u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x13c49c: 0xc04ed4a
    ctx->pc = 0x13C49Cu;
    SET_GPR_U32(ctx, 31, 0x13C4A4u);
    ctx->pc = 0x13C4A0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
    ctx->pc = 0x13B528u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B528_0x13b528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C4A4u; }
    }
    if (ctx->pc != 0x13C4A4u) { return; }
    ctx->pc = 0x13C4A4u;
    // 0x13c4a4: 0x3c030024
    ctx->pc = 0x13c4a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x13c4a8: 0x2103c
    ctx->pc = 0x13c4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13c4ac: 0x2103f
    ctx->pc = 0x13c4acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x13c4b0: 0x2464d180
    ctx->pc = 0x13c4b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294955392));
    // 0x13c4b4: 0xae420004
    ctx->pc = 0x13c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x13c4b8: 0x3c030022
    ctx->pc = 0x13c4b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x13c4bc: 0x8c62dea4
    ctx->pc = 0x13c4bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294958756)));
    // 0x13c4c0: 0x14400003
    ctx->pc = 0x13C4C0u;
    {
        const bool branch_taken_0x13c4c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13C4C4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13c4c0) {
            ctx->pc = 0x13C4D0u;
            goto label_13c4d0;
        }
    }
    ctx->pc = 0x13C4C8u;
    // 0x13c4c8: 0xc045a12
    ctx->pc = 0x13C4C8u;
    SET_GPR_U32(ctx, 31, 0x13C4D0u);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C4D0u; }
    }
    if (ctx->pc != 0x13C4D0u) { return; }
    ctx->pc = 0x13C4D0u;
label_13c4d0:
    // 0x13c4d0: 0xc04e082
    ctx->pc = 0x13C4D0u;
    SET_GPR_U32(ctx, 31, 0x13C4D8u);
    ctx->pc = 0x13C4D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26624));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C4D8u; }
    }
    if (ctx->pc != 0x13C4D8u) { return; }
    ctx->pc = 0x13C4D8u;
    // 0x13c4d8: 0xc04e160
    ctx->pc = 0x13C4D8u;
    SET_GPR_U32(ctx, 31, 0x13C4E0u);
    ctx->pc = 0x13C4DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138580_0x138580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C4E0u; }
    }
    if (ctx->pc != 0x13C4E0u) { return; }
    ctx->pc = 0x13C4E0u;
    // 0x13c4e0: 0xc04e082
    ctx->pc = 0x13C4E0u;
    SET_GPR_U32(ctx, 31, 0x13C4E8u);
    ctx->pc = 0x13C4E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26625));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C4E8u; }
    }
    if (ctx->pc != 0x13C4E8u) { return; }
    ctx->pc = 0x13C4E8u;
    // 0x13c4e8: 0xc04e082
    ctx->pc = 0x13C4E8u;
    SET_GPR_U32(ctx, 31, 0x13C4F0u);
    ctx->pc = 0x13C4ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26368));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C4F0u; }
    }
    if (ctx->pc != 0x13C4F0u) { return; }
    ctx->pc = 0x13C4F0u;
    // 0x13c4f0: 0x3c020022
    ctx->pc = 0x13c4f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13c4f4: 0x8c45dea0
    ctx->pc = 0x13c4f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294958752)));
    // 0x13c4f8: 0xc04e146
    ctx->pc = 0x13C4F8u;
    SET_GPR_U32(ctx, 31, 0x13C500u);
    ctx->pc = 0x13C4FCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138518u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138518_0x138518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C500u; }
    }
    if (ctx->pc != 0x13C500u) { return; }
    ctx->pc = 0x13C500u;
    // 0x13c500: 0xc04e082
    ctx->pc = 0x13C500u;
    SET_GPR_U32(ctx, 31, 0x13C508u);
    ctx->pc = 0x13C504u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26369));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C508u; }
    }
    if (ctx->pc != 0x13C508u) { return; }
    ctx->pc = 0x13C508u;
label_13c508:
    // 0x13c508: 0x274102a
    ctx->pc = 0x13c508u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 20)));
    // 0x13c50c: 0x1440ffc0
    ctx->pc = 0x13C50Cu;
    {
        const bool branch_taken_0x13c50c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13C510u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 8));
        if (branch_taken_0x13c50c) {
            ctx->pc = 0x13C410u;
            goto label_13c410;
        }
    }
    ctx->pc = 0x13C514u;
    // 0x13c514: 0x3c030022
    ctx->pc = 0x13c514u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
label_13c518:
    // 0x13c518: 0x2470dea4
    ctx->pc = 0x13c518u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294958756));
    // 0x13c51c: 0x8e020000
    ctx->pc = 0x13c51cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13c520: 0x14400004
    ctx->pc = 0x13C520u;
    {
        const bool branch_taken_0x13c520 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13C524u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13c520) {
            ctx->pc = 0x13C534u;
            goto label_13c534;
        }
    }
    ctx->pc = 0x13C528u;
    // 0x13c528: 0x3c040024
    ctx->pc = 0x13c528u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13c52c: 0xc045a12
    ctx->pc = 0x13C52Cu;
    SET_GPR_U32(ctx, 31, 0x13C534u);
    ctx->pc = 0x13C530u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955424));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C534u; }
    }
    if (ctx->pc != 0x13C534u) { return; }
    ctx->pc = 0x13C534u;
label_13c534:
    // 0x13c534: 0x1bc00009
    ctx->pc = 0x13C534u;
    {
        const bool branch_taken_0x13c534 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x13C538u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13c534) {
            ctx->pc = 0x13C55Cu;
            goto label_13c55c;
        }
    }
    ctx->pc = 0x13C53Cu;
    // 0x13c53c: 0x8e030000
    ctx->pc = 0x13c53cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13c540: 0x24020002
    ctx->pc = 0x13c540u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x13c544: 0x10620004
    ctx->pc = 0x13C544u;
    {
        const bool branch_taken_0x13c544 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x13C548u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x13c544) {
            ctx->pc = 0x13C558u;
            goto label_13c558;
        }
    }
    ctx->pc = 0x13C54Cu;
    // 0x13c54c: 0x3c040024
    ctx->pc = 0x13c54cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13c550: 0xc045a12
    ctx->pc = 0x13C550u;
    SET_GPR_U32(ctx, 31, 0x13C558u);
    ctx->pc = 0x13C554u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955448));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C558u; }
    }
    if (ctx->pc != 0x13C558u) { return; }
    ctx->pc = 0x13C558u;
label_13c558:
    // 0x13c558: 0x2c0102d
    ctx->pc = 0x13c558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_13c55c:
    // 0x13c55c: 0xdfb00100
    ctx->pc = 0x13c55cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x13c560: 0xdfb10108
    ctx->pc = 0x13c560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x13c564: 0xdfb20110
    ctx->pc = 0x13c564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x13c568: 0xdfb30118
    ctx->pc = 0x13c568u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x13c56c: 0xdfb40120
    ctx->pc = 0x13c56cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x13c570: 0xdfb50128
    ctx->pc = 0x13c570u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x13c574: 0xdfb60130
    ctx->pc = 0x13c574u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x13c578: 0xdfb70138
    ctx->pc = 0x13c578u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x13c57c: 0xdfbe0140
    ctx->pc = 0x13c57cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x13c580: 0xdfbf0148
    ctx->pc = 0x13c580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x13c584: 0x3e00008
    ctx->pc = 0x13C584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C588u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13C410u: goto label_13c410;
            case 0x13C498u: goto label_13c498;
            case 0x13C4D0u: goto label_13c4d0;
            case 0x13C508u: goto label_13c508;
            case 0x13C518u: goto label_13c518;
            case 0x13C534u: goto label_13c534;
            case 0x13C558u: goto label_13c558;
            case 0x13C55Cu: goto label_13c55c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13C58Cu;
    // 0x13c58c: 0x0
    ctx->pc = 0x13c58cu;
    // NOP
}
