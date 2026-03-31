#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A35F0
// Address: 0x1a35f0 - 0x1a36a0
void sub_001A35F0_0x1a35f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a35f0u;

    // 0x1a35f0: 0x2402ffff
    ctx->pc = 0x1a35f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a35f4: 0x10a20015
    ctx->pc = 0x1A35F4u;
    {
        const bool branch_taken_0x1a35f4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a35f4) {
            ctx->pc = 0x1A364Cu;
            goto label_1a364c;
        }
    }
    ctx->pc = 0x1A35FCu;
    // 0x1a35fc: 0x8c830004
    ctx->pc = 0x1a35fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a3600: 0x382d
    ctx->pc = 0x1a3600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3604: 0x1000000c
    ctx->pc = 0x1A3604u;
    {
        const bool branch_taken_0x1a3604 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3608u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12));
        if (branch_taken_0x1a3604) {
            ctx->pc = 0x1A3638u;
            goto label_1a3638;
        }
    }
    ctx->pc = 0x1A360Cu;
label_1a360c:
    // 0x1a360c: 0x8c820000
    ctx->pc = 0x1a360cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a3610: 0x14450006
    ctx->pc = 0x1A3610u;
    {
        const bool branch_taken_0x1a3610 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x1a3610) {
            ctx->pc = 0x1A362Cu;
            goto label_1a362c;
        }
    }
    ctx->pc = 0x1A3618u;
    // 0x1a3618: 0x14c00003
    ctx->pc = 0x1A3618u;
    {
        const bool branch_taken_0x1a3618 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A361Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3618) {
            ctx->pc = 0x1A3628u;
            goto label_1a3628;
        }
    }
    ctx->pc = 0x1A3620u;
    // 0x1a3620: 0x1000001b
    ctx->pc = 0x1A3620u;
    {
        const bool branch_taken_0x1a3620 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a3620) {
            ctx->pc = 0x1A3690u;
            goto label_1a3690;
        }
    }
    ctx->pc = 0x1A3628u;
label_1a3628:
    // 0x1a3628: 0x24c6ffff
    ctx->pc = 0x1a3628u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
label_1a362c:
    // 0x1a362c: 0x8c820008
    ctx->pc = 0x1a362cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a3630: 0x24e70001
    ctx->pc = 0x1a3630u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a3634: 0x822021
    ctx->pc = 0x1a3634u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a3638:
    // 0x1a3638: 0xe3102a
    ctx->pc = 0x1a3638u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 3)));
    // 0x1a363c: 0x1440fff3
    ctx->pc = 0x1A363Cu;
    {
        const bool branch_taken_0x1a363c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a363c) {
            ctx->pc = 0x1A360Cu;
            goto label_1a360c;
        }
    }
    ctx->pc = 0x1A3644u;
    // 0x1a3644: 0x10000012
    ctx->pc = 0x1A3644u;
    {
        const bool branch_taken_0x1a3644 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3648u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3644) {
            ctx->pc = 0x1A3690u;
            goto label_1a3690;
        }
    }
    ctx->pc = 0x1A364Cu;
label_1a364c:
    // 0x1a364c: 0x8c820004
    ctx->pc = 0x1a364cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a3650: 0xc2082b
    ctx->pc = 0x1a3650u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1a3654: 0x1020000d
    ctx->pc = 0x1A3654u;
    {
        const bool branch_taken_0x1a3654 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a3654) {
            ctx->pc = 0x1A368Cu;
            goto label_1a368c;
        }
    }
    ctx->pc = 0x1A365Cu;
    // 0x1a365c: 0x2484000c
    ctx->pc = 0x1a365cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12));
    // 0x1a3660: 0x10000004
    ctx->pc = 0x1A3660u;
    {
        const bool branch_taken_0x1a3660 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3664u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3660) {
            ctx->pc = 0x1A3674u;
            goto label_1a3674;
        }
    }
    ctx->pc = 0x1A3668u;
label_1a3668:
    // 0x1a3668: 0x8c820008
    ctx->pc = 0x1a3668u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a366c: 0x24630001
    ctx->pc = 0x1a366cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a3670: 0x822021
    ctx->pc = 0x1a3670u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a3674:
    // 0x1a3674: 0x66102a
    ctx->pc = 0x1a3674u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 6)));
    // 0x1a3678: 0x0
    ctx->pc = 0x1a3678u;
    // NOP
    // 0x1a367c: 0x1440fffa
    ctx->pc = 0x1A367Cu;
    {
        const bool branch_taken_0x1a367c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a367c) {
            ctx->pc = 0x1A3668u;
            goto label_1a3668;
        }
    }
    ctx->pc = 0x1A3684u;
    // 0x1a3684: 0x10000002
    ctx->pc = 0x1A3684u;
    {
        const bool branch_taken_0x1a3684 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3688u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3684) {
            ctx->pc = 0x1A3690u;
            goto label_1a3690;
        }
    }
    ctx->pc = 0x1A368Cu;
label_1a368c:
    // 0x1a368c: 0x102d
    ctx->pc = 0x1a368cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3690:
    // 0x1a3690: 0x3e00008
    ctx->pc = 0x1A3690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A360Cu: goto label_1a360c;
            case 0x1A3628u: goto label_1a3628;
            case 0x1A362Cu: goto label_1a362c;
            case 0x1A3638u: goto label_1a3638;
            case 0x1A364Cu: goto label_1a364c;
            case 0x1A3668u: goto label_1a3668;
            case 0x1A3674u: goto label_1a3674;
            case 0x1A368Cu: goto label_1a368c;
            case 0x1A3690u: goto label_1a3690;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A3698u;
    // 0x1a3698: 0x0
    ctx->pc = 0x1a3698u;
    // NOP
    // 0x1a369c: 0x0
    ctx->pc = 0x1a369cu;
    // NOP
}
