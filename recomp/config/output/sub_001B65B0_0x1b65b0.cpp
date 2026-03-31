#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B65B0
// Address: 0x1b65b0 - 0x1b6670
void sub_001B65B0_0x1b65b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b65b0u;

    // 0x1b65b0: 0x308300ff
    ctx->pc = 0x1b65b0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 255));
    // 0x1b65b4: 0x28610021
    ctx->pc = 0x1b65b4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 33));
    // 0x1b65b8: 0x10200003
    ctx->pc = 0x1B65B8u;
    {
        const bool branch_taken_0x1b65b8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B65BCu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 127));
        if (branch_taken_0x1b65b8) {
            ctx->pc = 0x1B65C8u;
            goto label_1b65c8;
        }
    }
    ctx->pc = 0x1B65C0u;
    // 0x1b65c0: 0x10000026
    ctx->pc = 0x1B65C0u;
    {
        const bool branch_taken_0x1b65c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B65C4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 33088));
        if (branch_taken_0x1b65c0) {
            ctx->pc = 0x1B665Cu;
            goto label_1b665c;
        }
    }
    ctx->pc = 0x1B65C8u;
label_1b65c8:
    // 0x1b65c8: 0x10200003
    ctx->pc = 0x1B65C8u;
    {
        const bool branch_taken_0x1b65c8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B65CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 32767));
        if (branch_taken_0x1b65c8) {
            ctx->pc = 0x1B65D8u;
            goto label_1b65d8;
        }
    }
    ctx->pc = 0x1B65D0u;
    // 0x1b65d0: 0x10000022
    ctx->pc = 0x1B65D0u;
    {
        const bool branch_taken_0x1b65d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B65D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28031));
        if (branch_taken_0x1b65d0) {
            ctx->pc = 0x1B665Cu;
            goto label_1b665c;
        }
    }
    ctx->pc = 0x1B65D8u;
label_1b65d8:
    // 0x1b65d8: 0x286100a1
    ctx->pc = 0x1b65d8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 161));
    // 0x1b65dc: 0x10200003
    ctx->pc = 0x1B65DCu;
    {
        const bool branch_taken_0x1b65dc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B65E0u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 166));
        if (branch_taken_0x1b65dc) {
            ctx->pc = 0x1B65ECu;
            goto label_1b65ec;
        }
    }
    ctx->pc = 0x1B65E4u;
    // 0x1b65e4: 0x1000001d
    ctx->pc = 0x1B65E4u;
    {
        const bool branch_taken_0x1b65e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B65E8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 33088));
        if (branch_taken_0x1b65e4) {
            ctx->pc = 0x1B665Cu;
            goto label_1b665c;
        }
    }
    ctx->pc = 0x1B65ECu;
label_1b65ec:
    // 0x1b65ec: 0x10200008
    ctx->pc = 0x1B65ECu;
    {
        const bool branch_taken_0x1b65ec = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B65F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 176));
        if (branch_taken_0x1b65ec) {
            ctx->pc = 0x1B6610u;
            goto label_1b6610;
        }
    }
    ctx->pc = 0x1B65F4u;
    // 0x1b65f4: 0x3c020023
    ctx->pc = 0x1b65f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1b65f8: 0x244246ff
    ctx->pc = 0x1b65f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18175));
    // 0x1b65fc: 0x431021
    ctx->pc = 0x1b65fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b6600: 0x90420000
    ctx->pc = 0x1b6600u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b6604: 0x24427fff
    ctx->pc = 0x1b6604u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32767));
    // 0x1b6608: 0x10000014
    ctx->pc = 0x1B6608u;
    {
        const bool branch_taken_0x1b6608 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B660Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28161));
        if (branch_taken_0x1b6608) {
            ctx->pc = 0x1B665Cu;
            goto label_1b665c;
        }
    }
    ctx->pc = 0x1B6610u;
label_1b6610:
    // 0x1b6610: 0x14620003
    ctx->pc = 0x1B6610u;
    {
        const bool branch_taken_0x1b6610 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1b6610) {
            ctx->pc = 0x1B6620u;
            goto label_1b6620;
        }
    }
    ctx->pc = 0x1B6618u;
    // 0x1b6618: 0x10000010
    ctx->pc = 0x1B6618u;
    {
        const bool branch_taken_0x1b6618 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B661Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 61114));
        if (branch_taken_0x1b6618) {
            ctx->pc = 0x1B665Cu;
            goto label_1b665c;
        }
    }
    ctx->pc = 0x1B6620u;
label_1b6620:
    // 0x1b6620: 0x240200de
    ctx->pc = 0x1b6620u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 222));
    // 0x1b6624: 0x14620003
    ctx->pc = 0x1B6624u;
    {
        const bool branch_taken_0x1b6624 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1B6628u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 223));
        if (branch_taken_0x1b6624) {
            ctx->pc = 0x1B6634u;
            goto label_1b6634;
        }
    }
    ctx->pc = 0x1B662Cu;
    // 0x1b662c: 0x1000000b
    ctx->pc = 0x1B662Cu;
    {
        const bool branch_taken_0x1b662c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6630u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 61098));
        if (branch_taken_0x1b662c) {
            ctx->pc = 0x1B665Cu;
            goto label_1b665c;
        }
    }
    ctx->pc = 0x1B6634u;
label_1b6634:
    // 0x1b6634: 0x14620003
    ctx->pc = 0x1B6634u;
    {
        const bool branch_taken_0x1b6634 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1b6634) {
            ctx->pc = 0x1B6644u;
            goto label_1b6644;
        }
    }
    ctx->pc = 0x1B663Cu;
    // 0x1b663c: 0x10000007
    ctx->pc = 0x1B663Cu;
    {
        const bool branch_taken_0x1b663c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6640u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 61097));
        if (branch_taken_0x1b663c) {
            ctx->pc = 0x1B665Cu;
            goto label_1b665c;
        }
    }
    ctx->pc = 0x1B6644u;
label_1b6644:
    // 0x1b6644: 0x3c020023
    ctx->pc = 0x1b6644u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1b6648: 0x2442470a
    ctx->pc = 0x1b6648u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18186));
    // 0x1b664c: 0x431021
    ctx->pc = 0x1b664cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b6650: 0x90420000
    ctx->pc = 0x1b6650u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b6654: 0x24427fff
    ctx->pc = 0x1b6654u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32767));
    // 0x1b6658: 0x24426f01
    ctx->pc = 0x1b6658u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28417));
label_1b665c:
    // 0x1b665c: 0x3e00008
    ctx->pc = 0x1B665Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B65C8u: goto label_1b65c8;
            case 0x1B65D8u: goto label_1b65d8;
            case 0x1B65ECu: goto label_1b65ec;
            case 0x1B6610u: goto label_1b6610;
            case 0x1B6620u: goto label_1b6620;
            case 0x1B6634u: goto label_1b6634;
            case 0x1B6644u: goto label_1b6644;
            case 0x1B665Cu: goto label_1b665c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B6664u;
    // 0x1b6664: 0x0
    ctx->pc = 0x1b6664u;
    // NOP
    // 0x1b6668: 0x0
    ctx->pc = 0x1b6668u;
    // NOP
    // 0x1b666c: 0x0
    ctx->pc = 0x1b666cu;
    // NOP
}
