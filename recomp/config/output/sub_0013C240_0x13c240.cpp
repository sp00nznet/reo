#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013C240
// Address: 0x13c240 - 0x13c3a0
void sub_0013C240_0x13c240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13c240u;

    // 0x13c240: 0x27bdfed0
    ctx->pc = 0x13c240u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x13c244: 0x24060100
    ctx->pc = 0x13c244u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x13c248: 0xffb00100
    ctx->pc = 0x13c248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x13c24c: 0x80802d
    ctx->pc = 0x13c24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c250: 0xffb30118
    ctx->pc = 0x13c250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x13c254: 0xa0982d
    ctx->pc = 0x13c254u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c258: 0x3a0202d
    ctx->pc = 0x13c258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c25c: 0xffb20110
    ctx->pc = 0x13c25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x13c260: 0xffb10108
    ctx->pc = 0x13c260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x13c264: 0xffbf0120
    ctx->pc = 0x13c264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x13c268: 0xc041f1a
    ctx->pc = 0x13C268u;
    SET_GPR_U32(ctx, 31, 0x13C270u);
    ctx->pc = 0x13C26Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C270u; }
    }
    if (ctx->pc != 0x13C270u) { return; }
    ctx->pc = 0x13C270u;
    // 0x13c270: 0x3a0282d
    ctx->pc = 0x13c270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c274: 0xc04efa0
    ctx->pc = 0x13C274u;
    SET_GPR_U32(ctx, 31, 0x13C27Cu);
    ctx->pc = 0x13C278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13BE80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013BE80_0x13be80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C27Cu; }
    }
    if (ctx->pc != 0x13C27Cu) { return; }
    ctx->pc = 0x13C27Cu;
    // 0x13c27c: 0xc04e082
    ctx->pc = 0x13C27Cu;
    SET_GPR_U32(ctx, 31, 0x13C284u);
    ctx->pc = 0x13C280u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24576));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C284u; }
    }
    if (ctx->pc != 0x13C284u) { return; }
    ctx->pc = 0x13C284u;
    // 0x13c284: 0x24050001
    ctx->pc = 0x13c284u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c288: 0xc04e146
    ctx->pc = 0x13C288u;
    SET_GPR_U32(ctx, 31, 0x13C290u);
    ctx->pc = 0x13C28Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138518u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138518_0x138518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C290u; }
    }
    if (ctx->pc != 0x13C290u) { return; }
    ctx->pc = 0x13C290u;
    // 0x13c290: 0x24046001
    ctx->pc = 0x13c290u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24577));
    // 0x13c294: 0xc04e082
    ctx->pc = 0x13C294u;
    SET_GPR_U32(ctx, 31, 0x13C29Cu);
    ctx->pc = 0x13C298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C29Cu; }
    }
    if (ctx->pc != 0x13C29Cu) { return; }
    ctx->pc = 0x13C29Cu;
    // 0x13c29c: 0x24046100
    ctx->pc = 0x13c29cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24832));
    // 0x13c2a0: 0x6400038
    ctx->pc = 0x13C2A0u;
    {
        const bool branch_taken_0x13c2a0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x13C2A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13c2a0) {
            ctx->pc = 0x13C384u;
            goto label_13c384;
        }
    }
    ctx->pc = 0x13C2A8u;
    // 0x13c2a8: 0xc04e082
    ctx->pc = 0x13C2A8u;
    SET_GPR_U32(ctx, 31, 0x13C2B0u);
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C2B0u; }
    }
    if (ctx->pc != 0x13C2B0u) { return; }
    ctx->pc = 0x13C2B0u;
    // 0x13c2b0: 0x240202d
    ctx->pc = 0x13c2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c2b4: 0x282d
    ctx->pc = 0x13c2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c2b8: 0xc04e0fa
    ctx->pc = 0x13C2B8u;
    SET_GPR_U32(ctx, 31, 0x13C2C0u);
    ctx->pc = 0x13C2BCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1383E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001383E8_0x1383e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C2C0u; }
    }
    if (ctx->pc != 0x13C2C0u) { return; }
    ctx->pc = 0x13C2C0u;
    // 0x13c2c0: 0x24046101
    ctx->pc = 0x13c2c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24833));
    // 0x13c2c4: 0xc04e082
    ctx->pc = 0x13C2C4u;
    SET_GPR_U32(ctx, 31, 0x13C2CCu);
    ctx->pc = 0x13C2C8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C2CCu; }
    }
    if (ctx->pc != 0x13C2CCu) { return; }
    ctx->pc = 0x13C2CCu;
    // 0x13c2cc: 0x24046200
    ctx->pc = 0x13c2ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25088));
    // 0x13c2d0: 0x620002c
    ctx->pc = 0x13C2D0u;
    {
        const bool branch_taken_0x13c2d0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x13C2D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13c2d0) {
            ctx->pc = 0x13C384u;
            goto label_13c384;
        }
    }
    ctx->pc = 0x13C2D8u;
    // 0x13c2d8: 0xc04e082
    ctx->pc = 0x13C2D8u;
    SET_GPR_U32(ctx, 31, 0x13C2E0u);
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C2E0u; }
    }
    if (ctx->pc != 0x13C2E0u) { return; }
    ctx->pc = 0x13C2E0u;
    // 0x13c2e0: 0x240202d
    ctx->pc = 0x13c2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c2e4: 0x282d
    ctx->pc = 0x13c2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c2e8: 0xc04e0fa
    ctx->pc = 0x13C2E8u;
    SET_GPR_U32(ctx, 31, 0x13C2F0u);
    ctx->pc = 0x13C2ECu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1383E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001383E8_0x1383e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C2F0u; }
    }
    if (ctx->pc != 0x13C2F0u) { return; }
    ctx->pc = 0x13C2F0u;
    // 0x13c2f0: 0x2803c
    ctx->pc = 0x13c2f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13c2f4: 0x10803f
    ctx->pc = 0x13c2f4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x13c2f8: 0xc04e082
    ctx->pc = 0x13C2F8u;
    SET_GPR_U32(ctx, 31, 0x13C300u);
    ctx->pc = 0x13C2FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25089));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C300u; }
    }
    if (ctx->pc != 0x13C300u) { return; }
    ctx->pc = 0x13C300u;
    // 0x13c300: 0x24021000
    ctx->pc = 0x13c300u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x13c304: 0x2a231001
    ctx->pc = 0x13c304u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 4097));
    // 0x13c308: 0x43880a
    ctx->pc = 0x13c308u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
    // 0x13c30c: 0x102d
    ctx->pc = 0x13c30cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c310: 0x600001c
    ctx->pc = 0x13C310u;
    {
        const bool branch_taken_0x13c310 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x13C314u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25344));
        if (branch_taken_0x13c310) {
            ctx->pc = 0x13C384u;
            goto label_13c384;
        }
    }
    ctx->pc = 0x13C318u;
    // 0x13c318: 0xc04e082
    ctx->pc = 0x13C318u;
    SET_GPR_U32(ctx, 31, 0x13C320u);
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C320u; }
    }
    if (ctx->pc != 0x13C320u) { return; }
    ctx->pc = 0x13C320u;
    // 0x13c320: 0x240202d
    ctx->pc = 0x13c320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c324: 0x11303c
    ctx->pc = 0x13c324u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
    // 0x13c328: 0x6303f
    ctx->pc = 0x13c328u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x13c32c: 0xc04e176
    ctx->pc = 0x13C32Cu;
    SET_GPR_U32(ctx, 31, 0x13C334u);
    ctx->pc = 0x13C330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1385D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001385D8_0x1385d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C334u; }
    }
    if (ctx->pc != 0x13C334u) { return; }
    ctx->pc = 0x13C334u;
    // 0x13c334: 0x24046301
    ctx->pc = 0x13c334u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25345));
    // 0x13c338: 0xc04e082
    ctx->pc = 0x13C338u;
    SET_GPR_U32(ctx, 31, 0x13C340u);
    ctx->pc = 0x13C33Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C340u; }
    }
    if (ctx->pc != 0x13C340u) { return; }
    ctx->pc = 0x13C340u;
    // 0x13c340: 0x6010009
    ctx->pc = 0x13C340u;
    {
        const bool branch_taken_0x13c340 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x13C344u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25856));
        if (branch_taken_0x13c340) {
            ctx->pc = 0x13C368u;
            goto label_13c368;
        }
    }
    ctx->pc = 0x13C348u;
    // 0x13c348: 0xc04e082
    ctx->pc = 0x13C348u;
    SET_GPR_U32(ctx, 31, 0x13C350u);
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C350u; }
    }
    if (ctx->pc != 0x13C350u) { return; }
    ctx->pc = 0x13C350u;
    // 0x13c350: 0xc04e160
    ctx->pc = 0x13C350u;
    SET_GPR_U32(ctx, 31, 0x13C358u);
    ctx->pc = 0x13C354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138580_0x138580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C358u; }
    }
    if (ctx->pc != 0x13C358u) { return; }
    ctx->pc = 0x13C358u;
    // 0x13c358: 0xc04e082
    ctx->pc = 0x13C358u;
    SET_GPR_U32(ctx, 31, 0x13C360u);
    ctx->pc = 0x13C35Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25857));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C360u; }
    }
    if (ctx->pc != 0x13C360u) { return; }
    ctx->pc = 0x13C360u;
    // 0x13c360: 0x10000008
    ctx->pc = 0x13C360u;
    {
        const bool branch_taken_0x13c360 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13C364u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13c360) {
            ctx->pc = 0x13C384u;
            goto label_13c384;
        }
    }
    ctx->pc = 0x13C368u;
label_13c368:
    // 0x13c368: 0xc04e082
    ctx->pc = 0x13C368u;
    SET_GPR_U32(ctx, 31, 0x13C370u);
    ctx->pc = 0x13C36Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25600));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C370u; }
    }
    if (ctx->pc != 0x13C370u) { return; }
    ctx->pc = 0x13C370u;
    // 0x13c370: 0xc04e160
    ctx->pc = 0x13C370u;
    SET_GPR_U32(ctx, 31, 0x13C378u);
    ctx->pc = 0x13C374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138580_0x138580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C378u; }
    }
    if (ctx->pc != 0x13C378u) { return; }
    ctx->pc = 0x13C378u;
    // 0x13c378: 0xc04e082
    ctx->pc = 0x13C378u;
    SET_GPR_U32(ctx, 31, 0x13C380u);
    ctx->pc = 0x13C37Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25601));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C380u; }
    }
    if (ctx->pc != 0x13C380u) { return; }
    ctx->pc = 0x13C380u;
    // 0x13c380: 0x24020001
    ctx->pc = 0x13c380u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_13c384:
    // 0x13c384: 0xdfb00100
    ctx->pc = 0x13c384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x13c388: 0xdfb10108
    ctx->pc = 0x13c388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x13c38c: 0xdfb20110
    ctx->pc = 0x13c38cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x13c390: 0xdfb30118
    ctx->pc = 0x13c390u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x13c394: 0xdfbf0120
    ctx->pc = 0x13c394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x13c398: 0x3e00008
    ctx->pc = 0x13C398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C39Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13C368u: goto label_13c368;
            case 0x13C384u: goto label_13c384;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13C3A0u;
}
