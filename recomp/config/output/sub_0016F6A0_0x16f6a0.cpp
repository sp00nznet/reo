#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016F6A0
// Address: 0x16f6a0 - 0x16f778
void sub_0016F6A0_0x16f6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16f6a0u;

    // 0x16f6a0: 0x27bdffb0
    ctx->pc = 0x16f6a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16f6a4: 0xffb00030
    ctx->pc = 0x16f6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16f6a8: 0xc0802d
    ctx->pc = 0x16f6a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6ac: 0xffb10038
    ctx->pc = 0x16f6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x16f6b0: 0x80882d
    ctx->pc = 0x16f6b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6b4: 0xffbf0040
    ctx->pc = 0x16f6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16f6b8: 0x3a0302d
    ctx->pc = 0x16f6b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6bc: 0xc059bfa
    ctx->pc = 0x16F6BCu;
    SET_GPR_U32(ctx, 31, 0x16F6C4u);
    ctx->pc = 0x16F6C0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 6968)));
    ctx->pc = 0x166FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166FE8_0x166fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F6C4u; }
    }
    if (ctx->pc != 0x16F6C4u) { return; }
    ctx->pc = 0x16F6C4u;
    // 0x16f6c4: 0x54400028
    ctx->pc = 0x16F6C4u;
    {
        const bool branch_taken_0x16f6c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16f6c4) {
            ctx->pc = 0x16F6C8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->pc = 0x16F768u;
            goto label_16f768;
        }
    }
    ctx->pc = 0x16F6CCu;
    // 0x16f6cc: 0x8fa20004
    ctx->pc = 0x16f6ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16f6d0: 0x10400024
    ctx->pc = 0x16F6D0u;
    {
        const bool branch_taken_0x16f6d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16F6D4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16f6d0) {
            ctx->pc = 0x16F764u;
            goto label_16f764;
        }
    }
    ctx->pc = 0x16F6D8u;
    // 0x16f6d8: 0x3a0202d
    ctx->pc = 0x16f6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6dc: 0xc05b326
    ctx->pc = 0x16F6DCu;
    SET_GPR_U32(ctx, 31, 0x16F6E4u);
    ctx->pc = 0x16F6E0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x16CC98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CC98_0x16cc98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F6E4u; }
    }
    if (ctx->pc != 0x16F6E4u) { return; }
    ctx->pc = 0x16F6E4u;
    // 0x16f6e4: 0x40202d
    ctx->pc = 0x16f6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6e8: 0x14800009
    ctx->pc = 0x16F6E8u;
    {
        const bool branch_taken_0x16f6e8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x16F6ECu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x16f6e8) {
            ctx->pc = 0x16F710u;
            goto label_16f710;
        }
    }
    ctx->pc = 0x16F6F0u;
    // 0x16f6f0: 0x8fa20004
    ctx->pc = 0x16f6f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16f6f4: 0x8fa3000c
    ctx->pc = 0x16f6f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16f6f8: 0x431021
    ctx->pc = 0x16f6f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16f6fc: 0x2445fffd
    ctx->pc = 0x16f6fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x16f700: 0x4a10016
    ctx->pc = 0x16F700u;
    {
        const bool branch_taken_0x16f700 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x16f700) {
            ctx->pc = 0x16F75Cu;
            goto label_16f75c;
        }
    }
    ctx->pc = 0x16F708u;
    // 0x16f708: 0x10000014
    ctx->pc = 0x16F708u;
    {
        const bool branch_taken_0x16f708 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16F70Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16f708) {
            ctx->pc = 0x16F75Cu;
            goto label_16f75c;
        }
    }
    ctx->pc = 0x16F710u;
label_16f710:
    // 0x16f710: 0x83102b
    ctx->pc = 0x16f710u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16f714: 0x14400007
    ctx->pc = 0x16F714u;
    {
        const bool branch_taken_0x16f714 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16F718u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x16f714) {
            ctx->pc = 0x16F734u;
            goto label_16f734;
        }
    }
    ctx->pc = 0x16F71Cu;
    // 0x16f71c: 0x8fa20004
    ctx->pc = 0x16f71cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16f720: 0x621021
    ctx->pc = 0x16f720u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16f724: 0x82102b
    ctx->pc = 0x16f724u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16f728: 0x1440000c
    ctx->pc = 0x16F728u;
    {
        const bool branch_taken_0x16f728 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16F72Cu;
        SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        if (branch_taken_0x16f728) {
            ctx->pc = 0x16F75Cu;
            goto label_16f75c;
        }
    }
    ctx->pc = 0x16F730u;
    // 0x16f730: 0x8fa60008
    ctx->pc = 0x16f730u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_16f734:
    // 0x16f734: 0x86102b
    ctx->pc = 0x16f734u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x16f738: 0x14400008
    ctx->pc = 0x16F738u;
    {
        const bool branch_taken_0x16f738 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16F73Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16f738) {
            ctx->pc = 0x16F75Cu;
            goto label_16f75c;
        }
    }
    ctx->pc = 0x16F740u;
    // 0x16f740: 0x8fa2000c
    ctx->pc = 0x16f740u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16f744: 0xc21021
    ctx->pc = 0x16f744u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16f748: 0x82102b
    ctx->pc = 0x16f748u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16f74c: 0x10400003
    ctx->pc = 0x16F74Cu;
    {
        const bool branch_taken_0x16f74c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16F750u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x16f74c) {
            ctx->pc = 0x16F75Cu;
            goto label_16f75c;
        }
    }
    ctx->pc = 0x16F754u;
    // 0x16f754: 0x861023
    ctx->pc = 0x16f754u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x16f758: 0x432821
    ctx->pc = 0x16f758u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16f75c:
    // 0x16f75c: 0xc05bdde
    ctx->pc = 0x16F75Cu;
    SET_GPR_U32(ctx, 31, 0x16F764u);
    ctx->pc = 0x16F760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16F778u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F778_0x16f778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F764u; }
    }
    if (ctx->pc != 0x16F764u) { return; }
    ctx->pc = 0x16F764u;
label_16f764:
    // 0x16f764: 0xdfb00030
    ctx->pc = 0x16f764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16f768:
    // 0x16f768: 0xdfb10038
    ctx->pc = 0x16f768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16f76c: 0xdfbf0040
    ctx->pc = 0x16f76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16f770: 0x3e00008
    ctx->pc = 0x16F770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F774u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F710u: goto label_16f710;
            case 0x16F734u: goto label_16f734;
            case 0x16F75Cu: goto label_16f75c;
            case 0x16F764u: goto label_16f764;
            case 0x16F768u: goto label_16f768;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16F778u;
}
