#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00159710
// Address: 0x159710 - 0x159780
void sub_00159710_0x159710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x159710u;

label_159710:
    // 0x159710: 0x27bdffe0
    ctx->pc = 0x159710u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_159714:
    // 0x159714: 0x3c067fff
    ctx->pc = 0x159714u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_159718:
    // 0x159718: 0xffb00010
    ctx->pc = 0x159718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_15971c:
    // 0x15971c: 0x80802d
    ctx->pc = 0x15971cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_159720:
    // 0x159720: 0xffbf0018
    ctx->pc = 0x159720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_159724:
    // 0x159724: 0x24050001
    ctx->pc = 0x159724u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_159728:
    // 0x159728: 0x34c6ffff
    ctx->pc = 0x159728u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
label_15972c:
    // 0x15972c: 0x8e030000
    ctx->pc = 0x15972cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_159730:
    // 0x159730: 0x8c620018
    ctx->pc = 0x159730u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_159734:
    // 0x159734: 0x40f809
label_159738:
    if (ctx->pc == 0x159738u) {
        ctx->pc = 0x159738u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15973Cu;
        goto label_15973c;
    }
    ctx->pc = 0x159734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15973Cu);
        ctx->pc = 0x159738u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159710u: goto label_159710;
            case 0x159714u: goto label_159714;
            case 0x159718u: goto label_159718;
            case 0x15971Cu: goto label_15971c;
            case 0x159720u: goto label_159720;
            case 0x159724u: goto label_159724;
            case 0x159728u: goto label_159728;
            case 0x15972Cu: goto label_15972c;
            case 0x159730u: goto label_159730;
            case 0x159734u: goto label_159734;
            case 0x159738u: goto label_159738;
            case 0x15973Cu: goto label_15973c;
            case 0x159740u: goto label_159740;
            case 0x159744u: goto label_159744;
            case 0x159748u: goto label_159748;
            case 0x15974Cu: goto label_15974c;
            case 0x159750u: goto label_159750;
            case 0x159754u: goto label_159754;
            case 0x159758u: goto label_159758;
            case 0x15975Cu: goto label_15975c;
            case 0x159760u: goto label_159760;
            case 0x159764u: goto label_159764;
            case 0x159768u: goto label_159768;
            case 0x15976Cu: goto label_15976c;
            case 0x159770u: goto label_159770;
            case 0x159774u: goto label_159774;
            case 0x159778u: goto label_159778;
            case 0x15977Cu: goto label_15977c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15973Cu; }
            if (ctx->pc != 0x15973Cu) { return; }
        }
    }
    ctx->pc = 0x15973Cu;
label_15973c:
    // 0x15973c: 0x8e030000
    ctx->pc = 0x15973cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_159740:
    // 0x159740: 0x200202d
    ctx->pc = 0x159740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_159744:
    // 0x159744: 0x24050001
    ctx->pc = 0x159744u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_159748:
    // 0x159748: 0x8c62001c
    ctx->pc = 0x159748u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_15974c:
    // 0x15974c: 0x40f809
label_159750:
    if (ctx->pc == 0x159750u) {
        ctx->pc = 0x159750u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x159754u;
        goto label_159754;
    }
    ctx->pc = 0x15974Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x159754u);
        ctx->pc = 0x159750u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159710u: goto label_159710;
            case 0x159714u: goto label_159714;
            case 0x159718u: goto label_159718;
            case 0x15971Cu: goto label_15971c;
            case 0x159720u: goto label_159720;
            case 0x159724u: goto label_159724;
            case 0x159728u: goto label_159728;
            case 0x15972Cu: goto label_15972c;
            case 0x159730u: goto label_159730;
            case 0x159734u: goto label_159734;
            case 0x159738u: goto label_159738;
            case 0x15973Cu: goto label_15973c;
            case 0x159740u: goto label_159740;
            case 0x159744u: goto label_159744;
            case 0x159748u: goto label_159748;
            case 0x15974Cu: goto label_15974c;
            case 0x159750u: goto label_159750;
            case 0x159754u: goto label_159754;
            case 0x159758u: goto label_159758;
            case 0x15975Cu: goto label_15975c;
            case 0x159760u: goto label_159760;
            case 0x159764u: goto label_159764;
            case 0x159768u: goto label_159768;
            case 0x15976Cu: goto label_15976c;
            case 0x159770u: goto label_159770;
            case 0x159774u: goto label_159774;
            case 0x159778u: goto label_159778;
            case 0x15977Cu: goto label_15977c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x159754u; }
            if (ctx->pc != 0x159754u) { return; }
        }
    }
    ctx->pc = 0x159754u;
label_159754:
    // 0x159754: 0x8fa30004
    ctx->pc = 0x159754u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_159758:
    // 0x159758: 0x28630004
    ctx->pc = 0x159758u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 4));
label_15975c:
    // 0x15975c: 0x14600003
label_159760:
    if (ctx->pc == 0x159760u) {
        ctx->pc = 0x159760u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x159764u;
        goto label_159764;
    }
    ctx->pc = 0x15975Cu;
    {
        const bool branch_taken_0x15975c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x159760u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15975c) {
            ctx->pc = 0x15976Cu;
            goto label_15976c;
        }
    }
    ctx->pc = 0x159764u;
label_159764:
    // 0x159764: 0xc05616e
label_159768:
    if (ctx->pc == 0x159768u) {
        ctx->pc = 0x159768u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x15976Cu;
        goto label_15976c;
    }
    ctx->pc = 0x159764u;
    SET_GPR_U32(ctx, 31, 0x15976Cu);
    ctx->pc = 0x159768u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1585B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001585B8_0x1585b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15976Cu; }
    }
    if (ctx->pc != 0x15976Cu) { return; }
    ctx->pc = 0x15976Cu;
label_15976c:
    // 0x15976c: 0xdfb00010
    ctx->pc = 0x15976cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_159770:
    // 0x159770: 0xdfbf0018
    ctx->pc = 0x159770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_159774:
    // 0x159774: 0x3e00008
label_159778:
    if (ctx->pc == 0x159778u) {
        ctx->pc = 0x159778u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x15977Cu;
        goto label_15977c;
    }
    ctx->pc = 0x159774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159778u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159710u: goto label_159710;
            case 0x159714u: goto label_159714;
            case 0x159718u: goto label_159718;
            case 0x15971Cu: goto label_15971c;
            case 0x159720u: goto label_159720;
            case 0x159724u: goto label_159724;
            case 0x159728u: goto label_159728;
            case 0x15972Cu: goto label_15972c;
            case 0x159730u: goto label_159730;
            case 0x159734u: goto label_159734;
            case 0x159738u: goto label_159738;
            case 0x15973Cu: goto label_15973c;
            case 0x159740u: goto label_159740;
            case 0x159744u: goto label_159744;
            case 0x159748u: goto label_159748;
            case 0x15974Cu: goto label_15974c;
            case 0x159750u: goto label_159750;
            case 0x159754u: goto label_159754;
            case 0x159758u: goto label_159758;
            case 0x15975Cu: goto label_15975c;
            case 0x159760u: goto label_159760;
            case 0x159764u: goto label_159764;
            case 0x159768u: goto label_159768;
            case 0x15976Cu: goto label_15976c;
            case 0x159770u: goto label_159770;
            case 0x159774u: goto label_159774;
            case 0x159778u: goto label_159778;
            case 0x15977Cu: goto label_15977c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15977Cu;
label_15977c:
    // 0x15977c: 0x0
    ctx->pc = 0x15977cu;
    // NOP
}
