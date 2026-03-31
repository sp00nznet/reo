#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015AF40
// Address: 0x15af40 - 0x15b010
void sub_0015AF40_0x15af40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15af40u;

    // 0x15af40: 0x27bdffd0
    ctx->pc = 0x15af40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15af44: 0xffb00000
    ctx->pc = 0x15af44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15af48: 0xc0802d
    ctx->pc = 0x15af48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15af4c: 0xffb30018
    ctx->pc = 0x15af4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15af50: 0xa0982d
    ctx->pc = 0x15af50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15af54: 0xffb10008
    ctx->pc = 0x15af54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15af58: 0x24850224
    ctx->pc = 0x15af58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 548));
    // 0x15af5c: 0xffb20010
    ctx->pc = 0x15af5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15af60: 0xffbf0020
    ctx->pc = 0x15af60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15af64: 0x8c820340
    ctx->pc = 0x15af64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 832)));
    // 0x15af68: 0x1040000e
    ctx->pc = 0x15AF68u;
    {
        const bool branch_taken_0x15af68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15AF6Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 404)));
        if (branch_taken_0x15af68) {
            ctx->pc = 0x15AFA4u;
            goto label_15afa4;
        }
    }
    ctx->pc = 0x15AF70u;
    // 0x15af70: 0x8c830344
    ctx->pc = 0x15af70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x15af74: 0xac800340
    ctx->pc = 0x15af74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 832), GPR_U32(ctx, 0));
    // 0x15af78: 0x24630001
    ctx->pc = 0x15af78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x15af7c: 0xac830344
    ctx->pc = 0x15af7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 836), GPR_U32(ctx, 3));
    // 0x15af80: 0x8ca2000c
    ctx->pc = 0x15af80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x15af84: 0x24420001
    ctx->pc = 0x15af84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x15af88: 0x14c00003
    ctx->pc = 0x15AF88u;
    {
        const bool branch_taken_0x15af88 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x15AF8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x15af88) {
            ctx->pc = 0x15AF98u;
            goto label_15af98;
        }
    }
    ctx->pc = 0x15AF90u;
    // 0x15af90: 0x10000017
    ctx->pc = 0x15AF90u;
    {
        const bool branch_taken_0x15af90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15AF94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x15af90) {
            ctx->pc = 0x15AFF0u;
            goto label_15aff0;
        }
    }
    ctx->pc = 0x15AF98u;
label_15af98:
    // 0x15af98: 0x8ca20010
    ctx->pc = 0x15af98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15af9c: 0x24420001
    ctx->pc = 0x15af9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x15afa0: 0xaca20010
    ctx->pc = 0x15afa0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_15afa4:
    // 0x15afa4: 0x2402fffd
    ctx->pc = 0x15afa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x15afa8: 0x2411fffe
    ctx->pc = 0x15afa8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x15afac: 0x46880b
    ctx->pc = 0x15afacu;
    if (GPR_U32(ctx, 6) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
    // 0x15afb0: 0x24120004
    ctx->pc = 0x15afb0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4));
    // 0x15afb4: 0x0
    ctx->pc = 0x15afb4u;
    // NOP
label_15afb8:
    // 0x15afb8: 0xc056b7a
    ctx->pc = 0x15AFB8u;
    SET_GPR_U32(ctx, 31, 0x15AFC0u);
    ctx->pc = 0x15AFBCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15ADE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ADE8_0x15ade8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AFC0u; }
    }
    if (ctx->pc != 0x15AFC0u) { return; }
    ctx->pc = 0x15AFC0u;
    // 0x15afc0: 0x200202d
    ctx->pc = 0x15afc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15afc4: 0x24050001
    ctx->pc = 0x15afc4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15afc8: 0x24060004
    ctx->pc = 0x15afc8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x15afcc: 0x10400007
    ctx->pc = 0x15AFCCu;
    {
        const bool branch_taken_0x15afcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15AFD0u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        if (branch_taken_0x15afcc) {
            ctx->pc = 0x15AFECu;
            goto label_15afec;
        }
    }
    ctx->pc = 0x15AFD4u;
    // 0x15afd4: 0x54600005
    ctx->pc = 0x15AFD4u;
    {
        const bool branch_taken_0x15afd4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x15afd4) {
            ctx->pc = 0x15AFD8u;
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x15AFECu;
            goto label_15afec;
        }
    }
    ctx->pc = 0x15AFDCu;
    // 0x15afdc: 0xc056c04
    ctx->pc = 0x15AFDCu;
    SET_GPR_U32(ctx, 31, 0x15AFE4u);
    ctx->pc = 0x15B010u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B010_0x15b010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AFE4u; }
    }
    if (ctx->pc != 0x15AFE4u) { return; }
    ctx->pc = 0x15AFE4u;
    // 0x15afe4: 0x1052fff4
    ctx->pc = 0x15AFE4u;
    {
        const bool branch_taken_0x15afe4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        if (branch_taken_0x15afe4) {
            ctx->pc = 0x15AFB8u;
            goto label_15afb8;
        }
    }
    ctx->pc = 0x15AFECu;
label_15afec:
    // 0x15afec: 0x220102d
    ctx->pc = 0x15afecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15aff0:
    // 0x15aff0: 0xdfb00000
    ctx->pc = 0x15aff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15aff4: 0xdfb10008
    ctx->pc = 0x15aff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15aff8: 0xdfb20010
    ctx->pc = 0x15aff8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15affc: 0xdfb30018
    ctx->pc = 0x15affcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b000: 0xdfbf0020
    ctx->pc = 0x15b000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b004: 0x3e00008
    ctx->pc = 0x15B004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B008u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15AF98u: goto label_15af98;
            case 0x15AFA4u: goto label_15afa4;
            case 0x15AFB8u: goto label_15afb8;
            case 0x15AFECu: goto label_15afec;
            case 0x15AFF0u: goto label_15aff0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15B00Cu;
    // 0x15b00c: 0x0
    ctx->pc = 0x15b00cu;
    // NOP
}
