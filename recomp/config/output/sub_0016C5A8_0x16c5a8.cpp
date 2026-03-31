#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016C5A8
// Address: 0x16c5a8 - 0x16c6b8
void sub_0016C5A8_0x16c5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16c5a8u;

    // 0x16c5a8: 0x27bdffc0
    ctx->pc = 0x16c5a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16c5ac: 0xffb00010
    ctx->pc = 0x16c5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16c5b0: 0xffb20020
    ctx->pc = 0x16c5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16c5b4: 0x80902d
    ctx->pc = 0x16c5b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c5b8: 0xffb10018
    ctx->pc = 0x16c5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16c5bc: 0x26500078
    ctx->pc = 0x16c5bcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 120));
    // 0x16c5c0: 0xffb30028
    ctx->pc = 0x16c5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x16c5c4: 0xffbf0030
    ctx->pc = 0x16c5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16c5c8: 0x8e531b30
    ctx->pc = 0x16c5c8u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 6960)));
    // 0x16c5cc: 0xc05b58c
    ctx->pc = 0x16C5CCu;
    SET_GPR_U32(ctx, 31, 0x16C5D4u);
    ctx->pc = 0x16C5D0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->pc = 0x16D630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D630_0x16d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5D4u; }
    }
    if (ctx->pc != 0x16C5D4u) { return; }
    ctx->pc = 0x16C5D4u;
    // 0x16c5d4: 0x24030001
    ctx->pc = 0x16c5d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c5d8: 0x50430026
    ctx->pc = 0x16C5D8u;
    {
        const bool branch_taken_0x16c5d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x16c5d8) {
            ctx->pc = 0x16C5DCu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x16C674u;
            goto label_16c674;
        }
    }
    ctx->pc = 0x16C5E0u;
    // 0x16c5e0: 0x8e020000
    ctx->pc = 0x16c5e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16c5e4: 0x10400005
    ctx->pc = 0x16C5E4u;
    {
        const bool branch_taken_0x16c5e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C5E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16c5e4) {
            ctx->pc = 0x16C5FCu;
            goto label_16c5fc;
        }
    }
    ctx->pc = 0x16C5ECu;
    // 0x16c5ec: 0x8e03007c
    ctx->pc = 0x16c5ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x16c5f0: 0x1060001f
    ctx->pc = 0x16C5F0u;
    {
        const bool branch_taken_0x16c5f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C5F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16c5f0) {
            ctx->pc = 0x16C670u;
            goto label_16c670;
        }
    }
    ctx->pc = 0x16C5F8u;
    // 0x16c5f8: 0x220202d
    ctx->pc = 0x16c5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c5fc:
    // 0x16c5fc: 0xc0564c6
    ctx->pc = 0x16C5FCu;
    SET_GPR_U32(ctx, 31, 0x16C604u);
    ctx->pc = 0x16C600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x159318u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00159318_0x159318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C604u; }
    }
    if (ctx->pc != 0x16C604u) { return; }
    ctx->pc = 0x16C604u;
    // 0x16c604: 0x240202d
    ctx->pc = 0x16c604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c608: 0x3c030003
    ctx->pc = 0x16c608u;
    SET_GPR_U32(ctx, 3, ((uint32_t)3 << 16));
    // 0x16c60c: 0x8fa60000
    ctx->pc = 0x16c60cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c610: 0x3463ffff
    ctx->pc = 0x16c610u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x16c614: 0x24050001
    ctx->pc = 0x16c614u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c618: 0x10c30015
    ctx->pc = 0x16C618u;
    {
        const bool branch_taken_0x16c618 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x16C61Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16c618) {
            ctx->pc = 0x16C670u;
            goto label_16c670;
        }
    }
    ctx->pc = 0x16C620u;
    // 0x16c620: 0xc059d52
    ctx->pc = 0x16C620u;
    SET_GPR_U32(ctx, 31, 0x16C628u);
    ctx->pc = 0x167548u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167548_0x167548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C628u; }
    }
    if (ctx->pc != 0x16C628u) { return; }
    ctx->pc = 0x16C628u;
    // 0x16c628: 0x240202d
    ctx->pc = 0x16c628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c62c: 0x8e6300e8
    ctx->pc = 0x16c62cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 232)));
    // 0x16c630: 0x24050001
    ctx->pc = 0x16c630u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c634: 0x43302a
    ctx->pc = 0x16c634u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x16c638: 0x10c0000d
    ctx->pc = 0x16C638u;
    {
        const bool branch_taken_0x16c638 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C63Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16c638) {
            ctx->pc = 0x16C670u;
            goto label_16c670;
        }
    }
    ctx->pc = 0x16C640u;
    // 0x16c640: 0xc05df24
    ctx->pc = 0x16C640u;
    SET_GPR_U32(ctx, 31, 0x16C648u);
    ctx->pc = 0x177C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C90_0x177c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C648u; }
    }
    if (ctx->pc != 0x16C648u) { return; }
    ctx->pc = 0x16C648u;
    // 0x16c648: 0x240202d
    ctx->pc = 0x16c648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c64c: 0x2c510001
    ctx->pc = 0x16c64cu;
    SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x16c650: 0xc059d52
    ctx->pc = 0x16C650u;
    SET_GPR_U32(ctx, 31, 0x16C658u);
    ctx->pc = 0x16C654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167548u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167548_0x167548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C658u; }
    }
    if (ctx->pc != 0x16C658u) { return; }
    ctx->pc = 0x16C658u;
    // 0x16c658: 0x240202d
    ctx->pc = 0x16c658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c65c: 0x220282d
    ctx->pc = 0x16c65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c660: 0xc059d42
    ctx->pc = 0x16C660u;
    SET_GPR_U32(ctx, 31, 0x16C668u);
    ctx->pc = 0x16C664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167508u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167508_0x167508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C668u; }
    }
    if (ctx->pc != 0x16C668u) { return; }
    ctx->pc = 0x16C668u;
    // 0x16c668: 0x202802a
    ctx->pc = 0x16c668u;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x16c66c: 0x2e020001
    ctx->pc = 0x16c66cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 1));
label_16c670:
    // 0x16c670: 0xdfb00010
    ctx->pc = 0x16c670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16c674:
    // 0x16c674: 0xdfb10018
    ctx->pc = 0x16c674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16c678: 0xdfb20020
    ctx->pc = 0x16c678u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c67c: 0xdfb30028
    ctx->pc = 0x16c67cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16c680: 0xdfbf0030
    ctx->pc = 0x16c680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16c684: 0x3e00008
    ctx->pc = 0x16C684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C688u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C5FCu: goto label_16c5fc;
            case 0x16C670u: goto label_16c670;
            case 0x16C674u: goto label_16c674;
            case 0x16C6ACu: goto label_16c6ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C68Cu;
    // 0x16c68c: 0x0
    ctx->pc = 0x16c68cu;
    // NOP
    // 0x16c690: 0x24840da4
    ctx->pc = 0x16c690u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3492));
    // 0x16c694: 0x3c027fff
    ctx->pc = 0x16c694u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x16c698: 0x8c830020
    ctx->pc = 0x16c698u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x16c69c: 0x3442ffff
    ctx->pc = 0x16c69cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x16c6a0: 0x10620002
    ctx->pc = 0x16C6A0u;
    {
        const bool branch_taken_0x16c6a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16C6A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16c6a0) {
            ctx->pc = 0x16C6ACu;
            goto label_16c6ac;
        }
    }
    ctx->pc = 0x16C6A8u;
    // 0x16c6a8: 0xac820000
    ctx->pc = 0x16c6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_16c6ac:
    // 0x16c6ac: 0x3e00008
    ctx->pc = 0x16C6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C5FCu: goto label_16c5fc;
            case 0x16C670u: goto label_16c670;
            case 0x16C674u: goto label_16c674;
            case 0x16C6ACu: goto label_16c6ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C6B4u;
    // 0x16c6b4: 0x0
    ctx->pc = 0x16c6b4u;
    // NOP
}
