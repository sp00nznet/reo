#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00170590
// Address: 0x170590 - 0x170630
void sub_00170590_0x170590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x170590u;

    // 0x170590: 0x27bdffe0
    ctx->pc = 0x170590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170594: 0xffb00010
    ctx->pc = 0x170594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x170598: 0x80802d
    ctx->pc = 0x170598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17059c: 0xffbf0018
    ctx->pc = 0x17059cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1705a0: 0xc05a7b2
    ctx->pc = 0x1705A0u;
    SET_GPR_U32(ctx, 31, 0x1705A8u);
    ctx->pc = 0x1705A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EC8_0x169ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1705A8u; }
    }
    if (ctx->pc != 0x1705A8u) { return; }
    ctx->pc = 0x1705A8u;
    // 0x1705a8: 0x8e051b30
    ctx->pc = 0x1705a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 6960)));
    // 0x1705ac: 0x802d
    ctx->pc = 0x1705acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1705b0: 0x8ca20138
    ctx->pc = 0x1705b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 312)));
    // 0x1705b4: 0x18400011
    ctx->pc = 0x1705B4u;
    {
        const bool branch_taken_0x1705b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1705B8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 316));
        if (branch_taken_0x1705b4) {
            ctx->pc = 0x1705FCu;
            goto label_1705fc;
        }
    }
    ctx->pc = 0x1705BCu;
    // 0x1705bc: 0x40182d
    ctx->pc = 0x1705bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1705c0: 0x24070002
    ctx->pc = 0x1705c0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1705c4: 0x24060004
    ctx->pc = 0x1705c4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1705c8: 0x8c820000
    ctx->pc = 0x1705c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1705cc: 0x0
    ctx->pc = 0x1705ccu;
    // NOP
label_1705d0:
    // 0x1705d0: 0x10470003
    ctx->pc = 0x1705D0u;
    {
        const bool branch_taken_0x1705d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 7));
        ctx->pc = 0x1705D4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 128));
        if (branch_taken_0x1705d0) {
            ctx->pc = 0x1705E0u;
            goto label_1705e0;
        }
    }
    ctx->pc = 0x1705D8u;
    // 0x1705d8: 0x54460003
    ctx->pc = 0x1705D8u;
    {
        const bool branch_taken_0x1705d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 6));
        if (branch_taken_0x1705d8) {
            ctx->pc = 0x1705DCu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->pc = 0x1705E8u;
            goto label_1705e8;
        }
    }
    ctx->pc = 0x1705E0u;
label_1705e0:
    // 0x1705e0: 0x26100001
    ctx->pc = 0x1705e0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1705e4: 0x2463ffff
    ctx->pc = 0x1705e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_1705e8:
    // 0x1705e8: 0x0
    ctx->pc = 0x1705e8u;
    // NOP
    // 0x1705ec: 0x0
    ctx->pc = 0x1705ecu;
    // NOP
    // 0x1705f0: 0x0
    ctx->pc = 0x1705f0u;
    // NOP
    // 0x1705f4: 0x5460fff6
    ctx->pc = 0x1705F4u;
    {
        const bool branch_taken_0x1705f4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1705f4) {
            ctx->pc = 0x1705F8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x1705D0u;
            goto label_1705d0;
        }
    }
    ctx->pc = 0x1705FCu;
label_1705fc:
    // 0x1705fc: 0x8ca3007c
    ctx->pc = 0x1705fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x170600: 0x24020001
    ctx->pc = 0x170600u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x170604: 0x14620002
    ctx->pc = 0x170604u;
    {
        const bool branch_taken_0x170604 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x170608u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x170604) {
            ctx->pc = 0x170610u;
            goto label_170610;
        }
    }
    ctx->pc = 0x17060Cu;
    // 0x17060c: 0x50800a
    ctx->pc = 0x17060cu;
    if (GPR_U32(ctx, 16) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
label_170610:
    // 0x170610: 0xc05a7b8
    ctx->pc = 0x170610u;
    SET_GPR_U32(ctx, 31, 0x170618u);
    ctx->pc = 0x170614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EE0_0x169ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170618u; }
    }
    if (ctx->pc != 0x170618u) { return; }
    ctx->pc = 0x170618u;
    // 0x170618: 0x200102d
    ctx->pc = 0x170618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17061c: 0xdfbf0018
    ctx->pc = 0x17061cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x170620: 0xdfb00010
    ctx->pc = 0x170620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170624: 0x3e00008
    ctx->pc = 0x170624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170628u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1705D0u: goto label_1705d0;
            case 0x1705E0u: goto label_1705e0;
            case 0x1705E8u: goto label_1705e8;
            case 0x1705FCu: goto label_1705fc;
            case 0x170610u: goto label_170610;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17062Cu;
    // 0x17062c: 0x0
    ctx->pc = 0x17062cu;
    // NOP
}
