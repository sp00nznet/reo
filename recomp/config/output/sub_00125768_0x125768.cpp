#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00125768
// Address: 0x125768 - 0x125878
void sub_00125768_0x125768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125768u;

label_125768:
    // 0x125768: 0x27bdfff0
    ctx->pc = 0x125768u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12576c: 0xffbf0000
    ctx->pc = 0x12576cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x125770: 0x84830098
    ctx->pc = 0x125770u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x125774: 0x14600004
    ctx->pc = 0x125774u;
    {
        const bool branch_taken_0x125774 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x125778u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x125774) {
            ctx->pc = 0x125788u;
            goto label_125788;
        }
    }
    ctx->pc = 0x12577Cu;
    // 0x12577c: 0xdfbf0000
    ctx->pc = 0x12577cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125780: 0x80495a6
    ctx->pc = 0x125780u;
    ctx->pc = 0x125784u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x125698u;
    entry_125698_0x125768(rdram, ctx, runtime); return;
    ctx->pc = 0x125788u;
label_125788:
    // 0x125788: 0x54620005
    ctx->pc = 0x125788u;
    {
        const bool branch_taken_0x125788 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x125788) {
            ctx->pc = 0x12578Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x1257A0u;
            goto label_1257a0;
        }
    }
    ctx->pc = 0x125790u;
    // 0x125790: 0xdfbf0000
    ctx->pc = 0x125790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125794: 0x8048c22
    ctx->pc = 0x125794u;
    ctx->pc = 0x125798u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x123088u;
    entry_123088_0x1230b0(rdram, ctx, runtime); return;
    ctx->pc = 0x12579Cu;
    // 0x12579c: 0x0
    ctx->pc = 0x12579cu;
    // NOP
label_1257a0:
    // 0x1257a0: 0x54620005
    ctx->pc = 0x1257A0u;
    {
        const bool branch_taken_0x1257a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1257a0) {
            ctx->pc = 0x1257A4u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x1257B8u;
            goto label_1257b8;
        }
    }
    ctx->pc = 0x1257A8u;
    // 0x1257a8: 0xdfbf0000
    ctx->pc = 0x1257a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1257ac: 0x80496a4
    ctx->pc = 0x1257ACu;
    ctx->pc = 0x1257B0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x125A90u;
    entry_125a90_0x125c08(rdram, ctx, runtime); return;
    ctx->pc = 0x1257B4u;
    // 0x1257b4: 0x0
    ctx->pc = 0x1257b4u;
    // NOP
label_1257b8:
    // 0x1257b8: 0x54620005
    ctx->pc = 0x1257B8u;
    {
        const bool branch_taken_0x1257b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1257b8) {
            ctx->pc = 0x1257BCu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
            ctx->pc = 0x1257D0u;
            goto label_1257d0;
        }
    }
    ctx->pc = 0x1257C0u;
    // 0x1257c0: 0xdfbf0000
    ctx->pc = 0x1257c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1257c4: 0x8048e86
    ctx->pc = 0x1257C4u;
    ctx->pc = 0x1257C8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x123A18u;
    entry_123a18_0x123a40(rdram, ctx, runtime); return;
    ctx->pc = 0x1257CCu;
    // 0x1257cc: 0x0
    ctx->pc = 0x1257ccu;
    // NOP
label_1257d0:
    // 0x1257d0: 0x54620005
    ctx->pc = 0x1257D0u;
    {
        const bool branch_taken_0x1257d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1257d0) {
            ctx->pc = 0x1257D4u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x1257E8u;
            goto label_1257e8;
        }
    }
    ctx->pc = 0x1257D8u;
    // 0x1257d8: 0xdfbf0000
    ctx->pc = 0x1257d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1257dc: 0x8049120
    ctx->pc = 0x1257DCu;
    ctx->pc = 0x1257E0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124480u;
    entry_124480_0x124518(rdram, ctx, runtime); return;
    ctx->pc = 0x1257E4u;
    // 0x1257e4: 0x0
    ctx->pc = 0x1257e4u;
    // NOP
label_1257e8:
    // 0x1257e8: 0x54620005
    ctx->pc = 0x1257E8u;
    {
        const bool branch_taken_0x1257e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1257e8) {
            ctx->pc = 0x1257ECu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
            ctx->pc = 0x125800u;
            goto label_125800;
        }
    }
    ctx->pc = 0x1257F0u;
    // 0x1257f0: 0xdfbf0000
    ctx->pc = 0x1257f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1257f4: 0x804991e
    ctx->pc = 0x1257F4u;
    ctx->pc = 0x1257F8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x126478u;
    entry_126478_0x1264d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1257FCu;
    // 0x1257fc: 0x0
    ctx->pc = 0x1257fcu;
    // NOP
label_125800:
    // 0x125800: 0x14620003
    ctx->pc = 0x125800u;
    {
        const bool branch_taken_0x125800 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x125804u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x125800) {
            ctx->pc = 0x125810u;
            goto label_125810;
        }
    }
    ctx->pc = 0x125808u;
    // 0x125808: 0x8048bb0
    ctx->pc = 0x125808u;
    ctx->pc = 0x12580Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x122EC0u;
    entry_122ec0_0x122ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x125810u;
label_125810:
    // 0x125810: 0x3e00008
    ctx->pc = 0x125810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125814u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125768u: goto label_125768;
            case 0x125788u: goto label_125788;
            case 0x1257A0u: goto label_1257a0;
            case 0x1257B8u: goto label_1257b8;
            case 0x1257D0u: goto label_1257d0;
            case 0x1257E8u: goto label_1257e8;
            case 0x125800u: goto label_125800;
            case 0x125810u: goto label_125810;
            case 0x125840u: goto label_125840;
            case 0x125854u: goto label_125854;
            case 0x125858u: goto label_125858;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125818u;
    // 0x125818: 0x27bdffe0
    ctx->pc = 0x125818u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12581c: 0x3c020021
    ctx->pc = 0x12581cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x125820: 0xffbf0018
    ctx->pc = 0x125820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x125824: 0xffb00000
    ctx->pc = 0x125824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125828: 0x2450b958
    ctx->pc = 0x125828u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294949208));
    // 0x12582c: 0xffb10008
    ctx->pc = 0x12582cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x125830: 0x2411000f
    ctx->pc = 0x125830u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 15));
    // 0x125834: 0xffb20010
    ctx->pc = 0x125834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x125838: 0x24120001
    ctx->pc = 0x125838u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12583c: 0x0
    ctx->pc = 0x12583cu;
    // NOP
label_125840:
    // 0x125840: 0x86020000
    ctx->pc = 0x125840u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125844: 0x54520004
    ctx->pc = 0x125844u;
    {
        const bool branch_taken_0x125844 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x125844) {
            ctx->pc = 0x125848u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x125858u;
            goto label_125858;
        }
    }
    ctx->pc = 0x12584Cu;
    // 0x12584c: 0xc0495da
    ctx->pc = 0x12584Cu;
    SET_GPR_U32(ctx, 31, 0x125854u);
    ctx->pc = 0x125850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125768u;
    goto label_125768;
    ctx->pc = 0x125854u;
label_125854:
    // 0x125854: 0x2631ffff
    ctx->pc = 0x125854u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_125858:
    // 0x125858: 0x621fff9
    ctx->pc = 0x125858u;
    {
        const bool branch_taken_0x125858 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x12585Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 228));
        if (branch_taken_0x125858) {
            ctx->pc = 0x125840u;
            goto label_125840;
        }
    }
    ctx->pc = 0x125860u;
    // 0x125860: 0xdfb00000
    ctx->pc = 0x125860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125864: 0xdfb10008
    ctx->pc = 0x125864u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125868: 0xdfb20010
    ctx->pc = 0x125868u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12586c: 0xdfbf0018
    ctx->pc = 0x12586cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x125870: 0x3e00008
    ctx->pc = 0x125870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125874u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125768u: goto label_125768;
            case 0x125788u: goto label_125788;
            case 0x1257A0u: goto label_1257a0;
            case 0x1257B8u: goto label_1257b8;
            case 0x1257D0u: goto label_1257d0;
            case 0x1257E8u: goto label_1257e8;
            case 0x125800u: goto label_125800;
            case 0x125810u: goto label_125810;
            case 0x125840u: goto label_125840;
            case 0x125854u: goto label_125854;
            case 0x125858u: goto label_125858;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125878u;
}
