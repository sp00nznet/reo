#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1733f8
// Address: 0x1733f8 - 0x1734b8
void entry_1733f8_0x1734b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1733f8u;

    // 0x1733f8: 0x27bdffd0
    ctx->pc = 0x1733f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1733fc: 0xffb00020
    ctx->pc = 0x1733fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x173400: 0xffbf0028
    ctx->pc = 0x173400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x173404: 0xc05a7b2
    ctx->pc = 0x173404u;
    SET_GPR_U32(ctx, 31, 0x17340Cu);
    ctx->pc = 0x173408u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EC8_0x169ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17340Cu; }
    }
    if (ctx->pc != 0x17340Cu) { return; }
    ctx->pc = 0x17340Cu;
    // 0x17340c: 0xafa00000
    ctx->pc = 0x17340cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x173410: 0x3c020023
    ctx->pc = 0x173410u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x173414: 0xafa00004
    ctx->pc = 0x173414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x173418: 0x2446f18c
    ctx->pc = 0x173418u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294963596));
    // 0x17341c: 0xafa00008
    ctx->pc = 0x17341cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x173420: 0x24070006
    ctx->pc = 0x173420u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 6));
    // 0x173424: 0x24050007
    ctx->pc = 0x173424u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x173428: 0x8cc20000
    ctx->pc = 0x173428u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17342c: 0x0
    ctx->pc = 0x17342cu;
    // NOP
label_173430:
    // 0x173430: 0x1040000e
    ctx->pc = 0x173430u;
    {
        const bool branch_taken_0x173430 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x173434u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x173430) {
            ctx->pc = 0x17346Cu;
            goto label_17346c;
        }
    }
    ctx->pc = 0x173438u;
    // 0x173438: 0x8c420048
    ctx->pc = 0x173438u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x17343c: 0x10400006
    ctx->pc = 0x17343Cu;
    {
        const bool branch_taken_0x17343c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x173440u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17343c) {
            ctx->pc = 0x173458u;
            goto label_173458;
        }
    }
    ctx->pc = 0x173444u;
    // 0x173444: 0x10470004
    ctx->pc = 0x173444u;
    {
        const bool branch_taken_0x173444 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 7));
        ctx->pc = 0x173448u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x173444) {
            ctx->pc = 0x173458u;
            goto label_173458;
        }
    }
    ctx->pc = 0x17344Cu;
    // 0x17344c: 0x4410002
    ctx->pc = 0x17344Cu;
    {
        const bool branch_taken_0x17344c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x173450u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17344c) {
            ctx->pc = 0x173458u;
            goto label_173458;
        }
    }
    ctx->pc = 0x173454u;
    // 0x173454: 0x24100002
    ctx->pc = 0x173454u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
label_173458:
    // 0x173458: 0x101080
    ctx->pc = 0x173458u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x17345c: 0x3a22021
    ctx->pc = 0x17345cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x173460: 0x8c830000
    ctx->pc = 0x173460u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x173464: 0x24630001
    ctx->pc = 0x173464u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x173468: 0xac830000
    ctx->pc = 0x173468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_17346c:
    // 0x17346c: 0x24a5ffff
    ctx->pc = 0x17346cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x173470: 0x4a3ffef
    ctx->pc = 0x173470u;
    {
        const bool branch_taken_0x173470 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x173470) {
            ctx->pc = 0x173474u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->pc = 0x173430u;
            goto label_173430;
        }
    }
    ctx->pc = 0x173478u;
    // 0x173478: 0x8fa20004
    ctx->pc = 0x173478u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17347c: 0x14400004
    ctx->pc = 0x17347Cu;
    {
        const bool branch_taken_0x17347c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x173480u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17347c) {
            ctx->pc = 0x173490u;
            goto label_173490;
        }
    }
    ctx->pc = 0x173484u;
    // 0x173484: 0x8fa20008
    ctx->pc = 0x173484u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173488: 0x24100002
    ctx->pc = 0x173488u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
    // 0x17348c: 0x2800a
    ctx->pc = 0x17348cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
label_173490:
    // 0x173490: 0x3c020023
    ctx->pc = 0x173490u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x173494: 0x27a40010
    ctx->pc = 0x173494u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x173498: 0xc05a7b8
    ctx->pc = 0x173498u;
    SET_GPR_U32(ctx, 31, 0x1734A0u);
    ctx->pc = 0x17349Cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963488), GPR_U32(ctx, 16));
    ctx->pc = 0x169EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EE0_0x169ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1734A0u; }
    }
    if (ctx->pc != 0x1734A0u) { return; }
    ctx->pc = 0x1734A0u;
    // 0x1734a0: 0xdfbf0028
    ctx->pc = 0x1734a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1734a4: 0x200102d
    ctx->pc = 0x1734a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1734a8: 0xdfb00020
    ctx->pc = 0x1734a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1734ac: 0x3e00008
    ctx->pc = 0x1734ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1734B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173430u: goto label_173430;
            case 0x173458u: goto label_173458;
            case 0x17346Cu: goto label_17346c;
            case 0x173490u: goto label_173490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1734B4u;
    // 0x1734b4: 0x0
    ctx->pc = 0x1734b4u;
    // NOP
}
