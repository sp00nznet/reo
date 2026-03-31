#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019E6B0
// Address: 0x19e6b0 - 0x19e7d0
void sub_0019E6B0_0x19e6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19e6b0u;

    // 0x19e6b0: 0x61a00
    ctx->pc = 0x19e6b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 8));
    // 0x19e6b4: 0x3c080023
    ctx->pc = 0x19e6b4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)35 << 16));
    // 0x19e6b8: 0x2463ffe0
    ctx->pc = 0x19e6b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x19e6bc: 0x25080d90
    ctx->pc = 0x19e6bcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 3472));
    // 0x19e6c0: 0x482d
    ctx->pc = 0x19e6c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e6c4:
    // 0x19e6c4: 0x8d070000
    ctx->pc = 0x19e6c4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19e6c8: 0x582d
    ctx->pc = 0x19e6c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e6cc: 0x25080004
    ctx->pc = 0x19e6ccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
label_19e6d0:
    // 0x19e6d0: 0x502d
    ctx->pc = 0x19e6d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e6d4:
    // 0x19e6d4: 0x8cec0000
    ctx->pc = 0x19e6d4u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19e6d8: 0x31860001
    ctx->pc = 0x19e6d8u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 12), 1));
    // 0x19e6dc: 0x14c00009
    ctx->pc = 0x19E6DCu;
    {
        const bool branch_taken_0x19e6dc = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x19E6E0u;
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 12), 1));
        if (branch_taken_0x19e6dc) {
            ctx->pc = 0x19E704u;
            goto label_19e704;
        }
    }
    ctx->pc = 0x19E6E4u;
    // 0x19e6e4: 0x5810003
    ctx->pc = 0x19E6E4u;
    {
        const bool branch_taken_0x19e6e4 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x19E6E8u;
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 12), 1));
        if (branch_taken_0x19e6e4) {
            ctx->pc = 0x19E6F4u;
            goto label_19e6f4;
        }
    }
    ctx->pc = 0x19E6ECu;
    // 0x19e6ec: 0x25860001
    ctx->pc = 0x19e6ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 12), 1));
    // 0x19e6f0: 0x63043
    ctx->pc = 0x19e6f0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_19e6f4:
    // 0x19e6f4: 0x863021
    ctx->pc = 0x19e6f4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x19e6f8: 0x90c60000
    ctx->pc = 0x19e6f8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19e6fc: 0x1000000a
    ctx->pc = 0x19E6FCu;
    {
        const bool branch_taken_0x19e6fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E700u;
        SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 15));
        if (branch_taken_0x19e6fc) {
            ctx->pc = 0x19E728u;
            goto label_19e728;
        }
    }
    ctx->pc = 0x19E704u;
label_19e704:
    // 0x19e704: 0x5810003
    ctx->pc = 0x19E704u;
    {
        const bool branch_taken_0x19e704 = (GPR_S32(ctx, 12) >= 0);
        if (branch_taken_0x19e704) {
            ctx->pc = 0x19E714u;
            goto label_19e714;
        }
    }
    ctx->pc = 0x19E70Cu;
    // 0x19e70c: 0x25860001
    ctx->pc = 0x19e70cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 12), 1));
    // 0x19e710: 0x63043
    ctx->pc = 0x19e710u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_19e714:
    // 0x19e714: 0x863021
    ctx->pc = 0x19e714u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x19e718: 0x90c60000
    ctx->pc = 0x19e718u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19e71c: 0x30c600f0
    ctx->pc = 0x19e71cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 240));
    // 0x19e720: 0x63103
    ctx->pc = 0x19e720u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x19e724: 0x30c600ff
    ctx->pc = 0x19e724u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 255));
label_19e728:
    // 0x19e728: 0x8ced0004
    ctx->pc = 0x19e728u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x19e72c: 0x30c600ff
    ctx->pc = 0x19e72cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 255));
    // 0x19e730: 0x31ac0001
    ctx->pc = 0x19e730u;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 13), 1));
    // 0x19e734: 0x1580000b
    ctx->pc = 0x19E734u;
    {
        const bool branch_taken_0x19e734 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x19E738u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
        if (branch_taken_0x19e734) {
            ctx->pc = 0x19E764u;
            goto label_19e764;
        }
    }
    ctx->pc = 0x19E73Cu;
    // 0x19e73c: 0x5a10003
    ctx->pc = 0x19E73Cu;
    {
        const bool branch_taken_0x19e73c = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x19E740u;
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 13), 1));
        if (branch_taken_0x19e73c) {
            ctx->pc = 0x19E74Cu;
            goto label_19e74c;
        }
    }
    ctx->pc = 0x19E744u;
    // 0x19e744: 0x25ac0001
    ctx->pc = 0x19e744u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 13), 1));
    // 0x19e748: 0xc6043
    ctx->pc = 0x19e748u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 1));
label_19e74c:
    // 0x19e74c: 0x8c6021
    ctx->pc = 0x19e74cu;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x19e750: 0x918c0000
    ctx->pc = 0x19e750u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x19e754: 0x318c000f
    ctx->pc = 0x19e754u;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 12), 15));
    // 0x19e758: 0xc6100
    ctx->pc = 0x19e758u;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 12), 4));
    // 0x19e75c: 0x10000009
    ctx->pc = 0x19E75Cu;
    {
        const bool branch_taken_0x19e75c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E760u;
        SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 12), 255));
        if (branch_taken_0x19e75c) {
            ctx->pc = 0x19E784u;
            goto label_19e784;
        }
    }
    ctx->pc = 0x19E764u;
label_19e764:
    // 0x19e764: 0x5a10003
    ctx->pc = 0x19E764u;
    {
        const bool branch_taken_0x19e764 = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x19E768u;
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 13), 1));
        if (branch_taken_0x19e764) {
            ctx->pc = 0x19E774u;
            goto label_19e774;
        }
    }
    ctx->pc = 0x19E76Cu;
    // 0x19e76c: 0x25ac0001
    ctx->pc = 0x19e76cu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 13), 1));
    // 0x19e770: 0xc6043
    ctx->pc = 0x19e770u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 1));
label_19e774:
    // 0x19e774: 0x8c6021
    ctx->pc = 0x19e774u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x19e778: 0x918c0000
    ctx->pc = 0x19e778u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x19e77c: 0x318c00f0
    ctx->pc = 0x19e77cu;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 12), 240));
    // 0x19e780: 0x318c00ff
    ctx->pc = 0x19e780u;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 12), 255));
label_19e784:
    // 0x19e784: 0x318c00ff
    ctx->pc = 0x19e784u;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 12), 255));
    // 0x19e788: 0x30c600ff
    ctx->pc = 0x19e788u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 255));
    // 0x19e78c: 0xcc3025
    ctx->pc = 0x19e78cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x19e790: 0x254a0001
    ctx->pc = 0x19e790u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x19e794: 0xa0a60000
    ctx->pc = 0x19e794u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x19e798: 0x29460020
    ctx->pc = 0x19e798u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 10), 32));
    // 0x19e79c: 0x14c0ffcd
    ctx->pc = 0x19E79Cu;
    {
        const bool branch_taken_0x19e79c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x19E7A0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x19e79c) {
            ctx->pc = 0x19E6D4u;
            goto label_19e6d4;
        }
    }
    ctx->pc = 0x19E7A4u;
    // 0x19e7a4: 0x256b0001
    ctx->pc = 0x19e7a4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
    // 0x19e7a8: 0x29660002
    ctx->pc = 0x19e7a8u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 11), 2));
    // 0x19e7ac: 0x14c0ffc8
    ctx->pc = 0x19E7ACu;
    {
        const bool branch_taken_0x19e7ac = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x19E7B0u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        if (branch_taken_0x19e7ac) {
            ctx->pc = 0x19E6D0u;
            goto label_19e6d0;
        }
    }
    ctx->pc = 0x19E7B4u;
    // 0x19e7b4: 0x25290001
    ctx->pc = 0x19e7b4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x19e7b8: 0x29260004
    ctx->pc = 0x19e7b8u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 9), 4));
    // 0x19e7bc: 0x14c0ffc1
    ctx->pc = 0x19E7BCu;
    {
        const bool branch_taken_0x19e7bc = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x19E7C0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 256));
        if (branch_taken_0x19e7bc) {
            ctx->pc = 0x19E6C4u;
            goto label_19e6c4;
        }
    }
    ctx->pc = 0x19E7C4u;
    // 0x19e7c4: 0x3e00008
    ctx->pc = 0x19E7C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E6C4u: goto label_19e6c4;
            case 0x19E6D0u: goto label_19e6d0;
            case 0x19E6D4u: goto label_19e6d4;
            case 0x19E6F4u: goto label_19e6f4;
            case 0x19E704u: goto label_19e704;
            case 0x19E714u: goto label_19e714;
            case 0x19E728u: goto label_19e728;
            case 0x19E74Cu: goto label_19e74c;
            case 0x19E764u: goto label_19e764;
            case 0x19E774u: goto label_19e774;
            case 0x19E784u: goto label_19e784;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E7CCu;
    // 0x19e7cc: 0x0
    ctx->pc = 0x19e7ccu;
    // NOP
}
