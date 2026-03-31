#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B66C0
// Address: 0x1b66c0 - 0x1b67f0
void sub_001B66C0_0x1b66c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b66c0u;

    // 0x1b66c0: 0x8c830000
    ctx->pc = 0x1b66c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b66c4: 0x90620000
    ctx->pc = 0x1b66c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b66c8: 0x24630001
    ctx->pc = 0x1b66c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b66cc: 0x284100c0
    ctx->pc = 0x1b66ccu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 192));
    // 0x1b66d0: 0x14200042
    ctx->pc = 0x1B66D0u;
    {
        const bool branch_taken_0x1b66d0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B66D4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1b66d0) {
            ctx->pc = 0x1B67DCu;
            goto label_1b67dc;
        }
    }
    ctx->pc = 0x1B66D8u;
    // 0x1b66d8: 0x284300c0
    ctx->pc = 0x1b66d8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 192));
    // 0x1b66dc: 0x14600017
    ctx->pc = 0x1B66DCu;
    {
        const bool branch_taken_0x1b66dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B66E0u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 224));
        if (branch_taken_0x1b66dc) {
            ctx->pc = 0x1B673Cu;
            goto label_1b673c;
        }
    }
    ctx->pc = 0x1B66E4u;
    // 0x1b66e4: 0x284100e0
    ctx->pc = 0x1b66e4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 224));
    // 0x1b66e8: 0x10200014
    ctx->pc = 0x1B66E8u;
    {
        const bool branch_taken_0x1b66e8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b66e8) {
            ctx->pc = 0x1B673Cu;
            goto label_1b673c;
        }
    }
    ctx->pc = 0x1B66F0u;
    // 0x1b66f0: 0x8c830000
    ctx->pc = 0x1b66f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b66f4: 0x90660000
    ctx->pc = 0x1b66f4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b66f8: 0x14c00003
    ctx->pc = 0x1B66F8u;
    {
        const bool branch_taken_0x1b66f8 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B66FCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x1b66f8) {
            ctx->pc = 0x1B6708u;
            goto label_1b6708;
        }
    }
    ctx->pc = 0x1B6700u;
    // 0x1b6700: 0x10000036
    ctx->pc = 0x1B6700u;
    {
        const bool branch_taken_0x1b6700 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6704u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1b6700) {
            ctx->pc = 0x1B67DCu;
            goto label_1b67dc;
        }
    }
    ctx->pc = 0x1B6708u;
label_1b6708:
    // 0x1b6708: 0x28c30080
    ctx->pc = 0x1b6708u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 128));
    // 0x1b670c: 0x14600004
    ctx->pc = 0x1B670Cu;
    {
        const bool branch_taken_0x1b670c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B6710u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        if (branch_taken_0x1b670c) {
            ctx->pc = 0x1B6720u;
            goto label_1b6720;
        }
    }
    ctx->pc = 0x1B6714u;
    // 0x1b6714: 0x28c100c0
    ctx->pc = 0x1b6714u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 6), 192));
    // 0x1b6718: 0x14200003
    ctx->pc = 0x1B6718u;
    {
        const bool branch_taken_0x1b6718 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b6718) {
            ctx->pc = 0x1B6728u;
            goto label_1b6728;
        }
    }
    ctx->pc = 0x1B6720u;
label_1b6720:
    // 0x1b6720: 0x1000002e
    ctx->pc = 0x1B6720u;
    {
        const bool branch_taken_0x1b6720 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6724u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1b6720) {
            ctx->pc = 0x1B67DCu;
            goto label_1b67dc;
        }
    }
    ctx->pc = 0x1B6728u;
label_1b6728:
    // 0x1b6728: 0x3042001f
    ctx->pc = 0x1b6728u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 31));
    // 0x1b672c: 0x30c3003f
    ctx->pc = 0x1b672cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 63));
    // 0x1b6730: 0x21180
    ctx->pc = 0x1b6730u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1b6734: 0x10000029
    ctx->pc = 0x1B6734u;
    {
        const bool branch_taken_0x1b6734 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6738u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x1b6734) {
            ctx->pc = 0x1B67DCu;
            goto label_1b67dc;
        }
    }
    ctx->pc = 0x1B673Cu;
label_1b673c:
    // 0x1b673c: 0x14600026
    ctx->pc = 0x1B673Cu;
    {
        const bool branch_taken_0x1b673c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B6740u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 240));
        if (branch_taken_0x1b673c) {
            ctx->pc = 0x1B67D8u;
            goto label_1b67d8;
        }
    }
    ctx->pc = 0x1B6744u;
    // 0x1b6744: 0x10200024
    ctx->pc = 0x1B6744u;
    {
        const bool branch_taken_0x1b6744 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b6744) {
            ctx->pc = 0x1B67D8u;
            goto label_1b67d8;
        }
    }
    ctx->pc = 0x1B674Cu;
    // 0x1b674c: 0x8c830000
    ctx->pc = 0x1b674cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b6750: 0x90670000
    ctx->pc = 0x1b6750u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b6754: 0x14e00003
    ctx->pc = 0x1B6754u;
    {
        const bool branch_taken_0x1b6754 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B6758u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x1b6754) {
            ctx->pc = 0x1B6764u;
            goto label_1b6764;
        }
    }
    ctx->pc = 0x1B675Cu;
    // 0x1b675c: 0x1000001f
    ctx->pc = 0x1B675Cu;
    {
        const bool branch_taken_0x1b675c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6760u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1b675c) {
            ctx->pc = 0x1B67DCu;
            goto label_1b67dc;
        }
    }
    ctx->pc = 0x1B6764u;
label_1b6764:
    // 0x1b6764: 0x28e30080
    ctx->pc = 0x1b6764u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), 128));
    // 0x1b6768: 0x14600004
    ctx->pc = 0x1B6768u;
    {
        const bool branch_taken_0x1b6768 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B676Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        if (branch_taken_0x1b6768) {
            ctx->pc = 0x1B677Cu;
            goto label_1b677c;
        }
    }
    ctx->pc = 0x1B6770u;
    // 0x1b6770: 0x28e100c0
    ctx->pc = 0x1b6770u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 7), 192));
    // 0x1b6774: 0x14200003
    ctx->pc = 0x1B6774u;
    {
        const bool branch_taken_0x1b6774 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b6774) {
            ctx->pc = 0x1B6784u;
            goto label_1b6784;
        }
    }
    ctx->pc = 0x1B677Cu;
label_1b677c:
    // 0x1b677c: 0x10000017
    ctx->pc = 0x1B677Cu;
    {
        const bool branch_taken_0x1b677c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6780u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1b677c) {
            ctx->pc = 0x1B67DCu;
            goto label_1b67dc;
        }
    }
    ctx->pc = 0x1B6784u;
label_1b6784:
    // 0x1b6784: 0x8c830000
    ctx->pc = 0x1b6784u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b6788: 0x90660000
    ctx->pc = 0x1b6788u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b678c: 0x14c00003
    ctx->pc = 0x1B678Cu;
    {
        const bool branch_taken_0x1b678c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B6790u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x1b678c) {
            ctx->pc = 0x1B679Cu;
            goto label_1b679c;
        }
    }
    ctx->pc = 0x1B6794u;
    // 0x1b6794: 0x10000011
    ctx->pc = 0x1B6794u;
    {
        const bool branch_taken_0x1b6794 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6798u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1b6794) {
            ctx->pc = 0x1B67DCu;
            goto label_1b67dc;
        }
    }
    ctx->pc = 0x1B679Cu;
label_1b679c:
    // 0x1b679c: 0x28c30080
    ctx->pc = 0x1b679cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 128));
    // 0x1b67a0: 0x14600004
    ctx->pc = 0x1B67A0u;
    {
        const bool branch_taken_0x1b67a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B67A4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        if (branch_taken_0x1b67a0) {
            ctx->pc = 0x1B67B4u;
            goto label_1b67b4;
        }
    }
    ctx->pc = 0x1B67A8u;
    // 0x1b67a8: 0x28c100c0
    ctx->pc = 0x1b67a8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 6), 192));
    // 0x1b67ac: 0x14200003
    ctx->pc = 0x1B67ACu;
    {
        const bool branch_taken_0x1b67ac = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B67B0u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 7), 63));
        if (branch_taken_0x1b67ac) {
            ctx->pc = 0x1B67BCu;
            goto label_1b67bc;
        }
    }
    ctx->pc = 0x1B67B4u;
label_1b67b4:
    // 0x1b67b4: 0x10000009
    ctx->pc = 0x1B67B4u;
    {
        const bool branch_taken_0x1b67b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B67B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1b67b4) {
            ctx->pc = 0x1B67DCu;
            goto label_1b67dc;
        }
    }
    ctx->pc = 0x1B67BCu;
label_1b67bc:
    // 0x1b67bc: 0x3042000f
    ctx->pc = 0x1b67bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x1b67c0: 0x42180
    ctx->pc = 0x1b67c0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 6));
    // 0x1b67c4: 0x21300
    ctx->pc = 0x1b67c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 12));
    // 0x1b67c8: 0x30c3003f
    ctx->pc = 0x1b67c8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 63));
    // 0x1b67cc: 0x441025
    ctx->pc = 0x1b67ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b67d0: 0x10000002
    ctx->pc = 0x1B67D0u;
    {
        const bool branch_taken_0x1b67d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B67D4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1b67d0) {
            ctx->pc = 0x1B67DCu;
            goto label_1b67dc;
        }
    }
    ctx->pc = 0x1B67D8u;
label_1b67d8:
    // 0x1b67d8: 0x2402ffff
    ctx->pc = 0x1b67d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b67dc:
    // 0x1b67dc: 0x3e00008
    ctx->pc = 0x1B67DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B6708u: goto label_1b6708;
            case 0x1B6720u: goto label_1b6720;
            case 0x1B6728u: goto label_1b6728;
            case 0x1B673Cu: goto label_1b673c;
            case 0x1B6764u: goto label_1b6764;
            case 0x1B677Cu: goto label_1b677c;
            case 0x1B6784u: goto label_1b6784;
            case 0x1B679Cu: goto label_1b679c;
            case 0x1B67B4u: goto label_1b67b4;
            case 0x1B67BCu: goto label_1b67bc;
            case 0x1B67D8u: goto label_1b67d8;
            case 0x1B67DCu: goto label_1b67dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B67E4u;
    // 0x1b67e4: 0x0
    ctx->pc = 0x1b67e4u;
    // NOP
    // 0x1b67e8: 0x0
    ctx->pc = 0x1b67e8u;
    // NOP
    // 0x1b67ec: 0x0
    ctx->pc = 0x1b67ecu;
    // NOP
}
