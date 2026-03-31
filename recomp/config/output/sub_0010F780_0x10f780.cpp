#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010F780
// Address: 0x10f780 - 0x10f880
void sub_0010F780_0x10f780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10f780u;

    // 0x10f780: 0x80a60000
    ctx->pc = 0x10f780u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10f784: 0x2402005e
    ctx->pc = 0x10f784u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 94));
    // 0x10f788: 0x14c20005
    ctx->pc = 0x10F788u;
    {
        const bool branch_taken_0x10f788 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x10F78Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x10f788) {
            ctx->pc = 0x10F7A0u;
            goto label_10f7a0;
        }
    }
    ctx->pc = 0x10F790u;
    // 0x10f790: 0x80a60000
    ctx->pc = 0x10f790u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10f794: 0x24a50001
    ctx->pc = 0x10f794u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x10f798: 0x10000002
    ctx->pc = 0x10F798u;
    {
        const bool branch_taken_0x10f798 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10F79Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x10f798) {
            ctx->pc = 0x10F7A4u;
            goto label_10f7a4;
        }
    }
    ctx->pc = 0x10F7A0u;
label_10f7a0:
    // 0x10f7a0: 0x402d
    ctx->pc = 0x10f7a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f7a4:
    // 0x10f7a4: 0x240700ff
    ctx->pc = 0x10f7a4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 255));
    // 0x10f7a8: 0x248200ff
    ctx->pc = 0x10f7a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 255));
    // 0x10f7ac: 0x0
    ctx->pc = 0x10f7acu;
    // NOP
label_10f7b0:
    // 0x10f7b0: 0x24e7ffff
    ctx->pc = 0x10f7b0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x10f7b4: 0xa0480000
    ctx->pc = 0x10f7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x10f7b8: 0x0
    ctx->pc = 0x10f7b8u;
    // NOP
    // 0x10f7bc: 0x0
    ctx->pc = 0x10f7bcu;
    // NOP
    // 0x10f7c0: 0x0
    ctx->pc = 0x10f7c0u;
    // NOP
    // 0x10f7c4: 0x4e1fffa
    ctx->pc = 0x10F7C4u;
    {
        const bool branch_taken_0x10f7c4 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x10F7C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x10f7c4) {
            ctx->pc = 0x10F7B0u;
            goto label_10f7b0;
        }
    }
    ctx->pc = 0x10F7CCu;
    // 0x10f7cc: 0x10c0002a
    ctx->pc = 0x10F7CCu;
    {
        const bool branch_taken_0x10f7cc = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x10F7D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
        if (branch_taken_0x10f7cc) {
            ctx->pc = 0x10F878u;
            goto label_10f878;
        }
    }
    ctx->pc = 0x10F7D4u;
    // 0x10f7d4: 0x24020001
    ctx->pc = 0x10f7d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f7d8: 0x240a002d
    ctx->pc = 0x10f7d8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 45));
    // 0x10f7dc: 0x484023
    ctx->pc = 0x10f7dcu;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x10f7e0: 0x2409005d
    ctx->pc = 0x10f7e0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 93));
    // 0x10f7e4: 0x0
    ctx->pc = 0x10f7e4u;
    // NOP
label_10f7e8:
    // 0x10f7e8: 0x861021
    ctx->pc = 0x10f7e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_10f7ec:
    // 0x10f7ec: 0xa0480000
    ctx->pc = 0x10f7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x10f7f0: 0x80a70000
    ctx->pc = 0x10f7f0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_10f7f4:
    // 0x10f7f4: 0x10ea000c
    ctx->pc = 0x10F7F4u;
    {
        const bool branch_taken_0x10f7f4 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 10));
        ctx->pc = 0x10F7F8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x10f7f4) {
            ctx->pc = 0x10F828u;
            goto label_10f828;
        }
    }
    ctx->pc = 0x10F7FCu;
    // 0x10f7fc: 0x28e2002e
    ctx->pc = 0x10f7fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 46));
    // 0x10f800: 0x10400005
    ctx->pc = 0x10F800u;
    {
        const bool branch_taken_0x10f800 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10f800) {
            ctx->pc = 0x10F818u;
            goto label_10f818;
        }
    }
    ctx->pc = 0x10F808u;
    // 0x10f808: 0x10e0001b
    ctx->pc = 0x10F808u;
    {
        const bool branch_taken_0x10f808 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x10F80Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
        if (branch_taken_0x10f808) {
            ctx->pc = 0x10F878u;
            goto label_10f878;
        }
    }
    ctx->pc = 0x10F810u;
    // 0x10f810: 0x1000fff5
    ctx->pc = 0x10F810u;
    {
        const bool branch_taken_0x10f810 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10F814u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10f810) {
            ctx->pc = 0x10F7E8u;
            goto label_10f7e8;
        }
    }
    ctx->pc = 0x10F818u;
label_10f818:
    // 0x10f818: 0x10e90017
    ctx->pc = 0x10F818u;
    {
        const bool branch_taken_0x10f818 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 9));
        ctx->pc = 0x10F81Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10f818) {
            ctx->pc = 0x10F878u;
            goto label_10f878;
        }
    }
    ctx->pc = 0x10F820u;
    // 0x10f820: 0x10000013
    ctx->pc = 0x10F820u;
    {
        const bool branch_taken_0x10f820 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10F824u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10f820) {
            ctx->pc = 0x10F870u;
            goto label_10f870;
        }
    }
    ctx->pc = 0x10F828u;
label_10f828:
    // 0x10f828: 0x80a70000
    ctx->pc = 0x10f828u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10f82c: 0x50e9ffee
    ctx->pc = 0x10F82Cu;
    {
        const bool branch_taken_0x10f82c = (GPR_U32(ctx, 7) == GPR_U32(ctx, 9));
        if (branch_taken_0x10f82c) {
            ctx->pc = 0x10F830u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 45));
            ctx->pc = 0x10F7E8u;
            goto label_10f7e8;
        }
    }
    ctx->pc = 0x10F834u;
    // 0x10f834: 0xe6102a
    ctx->pc = 0x10f834u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
    // 0x10f838: 0x50400003
    ctx->pc = 0x10F838u;
    {
        const bool branch_taken_0x10f838 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10f838) {
            ctx->pc = 0x10F83Cu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x10F848u;
            goto label_10f848;
        }
    }
    ctx->pc = 0x10F840u;
    // 0x10f840: 0x1000ffe9
    ctx->pc = 0x10F840u;
    {
        const bool branch_taken_0x10f840 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10F844u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 45));
        if (branch_taken_0x10f840) {
            ctx->pc = 0x10F7E8u;
            goto label_10f7e8;
        }
    }
    ctx->pc = 0x10F848u;
label_10f848:
    // 0x10f848: 0x24c60001
    ctx->pc = 0x10f848u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x10f84c: 0x861021
    ctx->pc = 0x10f84cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x10f850: 0xc7182a
    ctx->pc = 0x10f850u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 7)));
    // 0x10f854: 0x0
    ctx->pc = 0x10f854u;
    // NOP
    // 0x10f858: 0x0
    ctx->pc = 0x10f858u;
    // NOP
    // 0x10f85c: 0x1460fffa
    ctx->pc = 0x10F85Cu;
    {
        const bool branch_taken_0x10f85c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x10F860u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
        if (branch_taken_0x10f85c) {
            ctx->pc = 0x10F848u;
            goto label_10f848;
        }
    }
    ctx->pc = 0x10F864u;
    // 0x10f864: 0x1000ffe3
    ctx->pc = 0x10F864u;
    {
        const bool branch_taken_0x10f864 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10F868u;
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x10f864) {
            ctx->pc = 0x10F7F4u;
            goto label_10f7f4;
        }
    }
    ctx->pc = 0x10F86Cu;
    // 0x10f86c: 0x0
    ctx->pc = 0x10f86cu;
    // NOP
label_10f870:
    // 0x10f870: 0x1000ffde
    ctx->pc = 0x10F870u;
    {
        const bool branch_taken_0x10f870 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10F874u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        if (branch_taken_0x10f870) {
            ctx->pc = 0x10F7ECu;
            goto label_10f7ec;
        }
    }
    ctx->pc = 0x10F878u;
label_10f878:
    // 0x10f878: 0x3e00008
    ctx->pc = 0x10F878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10F7A0u: goto label_10f7a0;
            case 0x10F7A4u: goto label_10f7a4;
            case 0x10F7B0u: goto label_10f7b0;
            case 0x10F7E8u: goto label_10f7e8;
            case 0x10F7ECu: goto label_10f7ec;
            case 0x10F7F4u: goto label_10f7f4;
            case 0x10F818u: goto label_10f818;
            case 0x10F828u: goto label_10f828;
            case 0x10F848u: goto label_10f848;
            case 0x10F870u: goto label_10f870;
            case 0x10F878u: goto label_10f878;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10F880u;
}
