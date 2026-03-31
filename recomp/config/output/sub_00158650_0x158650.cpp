#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00158650
// Address: 0x158650 - 0x158750
void sub_00158650_0x158650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x158650u;

    // 0x158650: 0x27bdffd0
    ctx->pc = 0x158650u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x158654: 0x182d
    ctx->pc = 0x158654u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158658: 0xffb00000
    ctx->pc = 0x158658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15865c: 0x80802d
    ctx->pc = 0x15865cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158660: 0xffb10008
    ctx->pc = 0x158660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x158664: 0x2058823
    ctx->pc = 0x158664u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x158668: 0x230102b
    ctx->pc = 0x158668u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x15866c: 0xffb30018
    ctx->pc = 0x15866cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x158670: 0xffb20010
    ctx->pc = 0x158670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x158674: 0xc0982d
    ctx->pc = 0x158674u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158678: 0xffb40020
    ctx->pc = 0x158678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x15867c: 0x1040002b
    ctx->pc = 0x15867Cu;
    {
        const bool branch_taken_0x15867c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x158680u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        if (branch_taken_0x15867c) {
            ctx->pc = 0x15872Cu;
            goto label_15872c;
        }
    }
    ctx->pc = 0x158684u;
    // 0x158684: 0x24120001
    ctx->pc = 0x158684u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x158688: 0x24140003
    ctx->pc = 0x158688u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 3));
    // 0x15868c: 0x2610ffff
    ctx->pc = 0x15868cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_158690:
    // 0x158690: 0x1072000b
    ctx->pc = 0x158690u;
    {
        const bool branch_taken_0x158690 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 18));
        ctx->pc = 0x158694u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x158690) {
            ctx->pc = 0x1586C0u;
            goto label_1586c0;
        }
    }
    ctx->pc = 0x158698u;
    // 0x158698: 0x50600021
    ctx->pc = 0x158698u;
    {
        const bool branch_taken_0x158698 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x158698) {
            ctx->pc = 0x15869Cu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x158720u;
            goto label_158720;
        }
    }
    ctx->pc = 0x1586A0u;
    // 0x1586a0: 0x24040002
    ctx->pc = 0x1586a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1586a4: 0x1064000a
    ctx->pc = 0x1586A4u;
    {
        const bool branch_taken_0x1586a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x1586a4) {
            ctx->pc = 0x1586D0u;
            goto label_1586d0;
        }
    }
    ctx->pc = 0x1586ACu;
    // 0x1586ac: 0x10740010
    ctx->pc = 0x1586ACu;
    {
        const bool branch_taken_0x1586ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 20));
        if (branch_taken_0x1586ac) {
            ctx->pc = 0x1586F0u;
            goto label_1586f0;
        }
    }
    ctx->pc = 0x1586B4u;
    // 0x1586b4: 0x1000001b
    ctx->pc = 0x1586B4u;
    {
        const bool branch_taken_0x1586b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1586B8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        if (branch_taken_0x1586b4) {
            ctx->pc = 0x158724u;
            goto label_158724;
        }
    }
    ctx->pc = 0x1586BCu;
    // 0x1586bc: 0x0
    ctx->pc = 0x1586bcu;
    // NOP
label_1586c0:
    // 0x1586c0: 0x50430017
    ctx->pc = 0x1586C0u;
    {
        const bool branch_taken_0x1586c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1586c0) {
            ctx->pc = 0x1586C4u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x158720u;
            goto label_158720;
        }
    }
    ctx->pc = 0x1586C8u;
    // 0x1586c8: 0x10000016
    ctx->pc = 0x1586C8u;
    {
        const bool branch_taken_0x1586c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1586CCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        if (branch_taken_0x1586c8) {
            ctx->pc = 0x158724u;
            goto label_158724;
        }
    }
    ctx->pc = 0x1586D0u;
label_1586d0:
    // 0x1586d0: 0x14400003
    ctx->pc = 0x1586D0u;
    {
        const bool branch_taken_0x1586d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1586d0) {
            ctx->pc = 0x1586E0u;
            goto label_1586e0;
        }
    }
    ctx->pc = 0x1586D8u;
    // 0x1586d8: 0x10000011
    ctx->pc = 0x1586D8u;
    {
        const bool branch_taken_0x1586d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1586DCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1586d8) {
            ctx->pc = 0x158720u;
            goto label_158720;
        }
    }
    ctx->pc = 0x1586E0u;
label_1586e0:
    // 0x1586e0: 0x10520010
    ctx->pc = 0x1586E0u;
    {
        const bool branch_taken_0x1586e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        ctx->pc = 0x1586E4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        if (branch_taken_0x1586e0) {
            ctx->pc = 0x158724u;
            goto label_158724;
        }
    }
    ctx->pc = 0x1586E8u;
    // 0x1586e8: 0x1000000e
    ctx->pc = 0x1586E8u;
    {
        const bool branch_taken_0x1586e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1586ECu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1586e8) {
            ctx->pc = 0x158724u;
            goto label_158724;
        }
    }
    ctx->pc = 0x1586F0u;
label_1586f0:
    // 0x1586f0: 0x54400009
    ctx->pc = 0x1586F0u;
    {
        const bool branch_taken_0x1586f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1586f0) {
            ctx->pc = 0x1586F4u;
            SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
            ctx->pc = 0x158718u;
            goto label_158718;
        }
    }
    ctx->pc = 0x1586F8u;
    // 0x1586f8: 0xc05616e
    ctx->pc = 0x1586F8u;
    SET_GPR_U32(ctx, 31, 0x158700u);
    ctx->pc = 0x1586FCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1585B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001585B8_0x1585b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158700u; }
    }
    if (ctx->pc != 0x158700u) { return; }
    ctx->pc = 0x158700u;
    // 0x158700: 0x2621824
    ctx->pc = 0x158700u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x158704: 0x1460000a
    ctx->pc = 0x158704u;
    {
        const bool branch_taken_0x158704 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x158708u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x158704) {
            ctx->pc = 0x158730u;
            goto label_158730;
        }
    }
    ctx->pc = 0x15870Cu;
    // 0x15870c: 0x10000004
    ctx->pc = 0x15870Cu;
    {
        const bool branch_taken_0x15870c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x158710u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15870c) {
            ctx->pc = 0x158720u;
            goto label_158720;
        }
    }
    ctx->pc = 0x158714u;
    // 0x158714: 0x0
    ctx->pc = 0x158714u;
    // NOP
label_158718:
    // 0x158718: 0x240182d
    ctx->pc = 0x158718u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15871c: 0x82180a
    ctx->pc = 0x15871cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
label_158720:
    // 0x158720: 0x230102b
    ctx->pc = 0x158720u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_158724:
    // 0x158724: 0x1440ffda
    ctx->pc = 0x158724u;
    {
        const bool branch_taken_0x158724 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x158728u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
        if (branch_taken_0x158724) {
            ctx->pc = 0x158690u;
            goto label_158690;
        }
    }
    ctx->pc = 0x15872Cu;
label_15872c:
    // 0x15872c: 0x102d
    ctx->pc = 0x15872cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158730:
    // 0x158730: 0xdfb00000
    ctx->pc = 0x158730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158734: 0xdfb10008
    ctx->pc = 0x158734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x158738: 0xdfb20010
    ctx->pc = 0x158738u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15873c: 0xdfb30018
    ctx->pc = 0x15873cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x158740: 0xdfb40020
    ctx->pc = 0x158740u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158744: 0xdfbf0028
    ctx->pc = 0x158744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158748: 0x3e00008
    ctx->pc = 0x158748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15874Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158690u: goto label_158690;
            case 0x1586C0u: goto label_1586c0;
            case 0x1586D0u: goto label_1586d0;
            case 0x1586E0u: goto label_1586e0;
            case 0x1586F0u: goto label_1586f0;
            case 0x158718u: goto label_158718;
            case 0x158720u: goto label_158720;
            case 0x158724u: goto label_158724;
            case 0x15872Cu: goto label_15872c;
            case 0x158730u: goto label_158730;
            default: break;
        }
        return;
    }
    ctx->pc = 0x158750u;
}
