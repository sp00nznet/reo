#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_177560
// Address: 0x177560 - 0x1775e0
void entry_177560_0x1775e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x177560u;

label_177560:
    // 0x177560: 0x27bdffe0
    ctx->pc = 0x177560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_177564:
    // 0x177564: 0xffbf0018
    ctx->pc = 0x177564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_177568:
    // 0x177568: 0xffb00000
    ctx->pc = 0x177568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17756c:
    // 0x17756c: 0x80802d
    ctx->pc = 0x17756cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_177570:
    // 0x177570: 0xffb10008
    ctx->pc = 0x177570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_177574:
    // 0x177574: 0x882d
    ctx->pc = 0x177574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177578:
    // 0x177578: 0xffb20010
    ctx->pc = 0x177578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_17757c:
    // 0x17757c: 0x59080
    ctx->pc = 0x17757cu;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 5), 2));
label_177580:
    // 0x177580: 0x202d
    ctx->pc = 0x177580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177584:
    // 0x177584: 0x2a22000f
    ctx->pc = 0x177584u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 15));
label_177588:
    // 0x177588: 0x1040000e
label_17758c:
    if (ctx->pc == 0x17758Cu) {
        ctx->pc = 0x17758Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x177590u;
        goto label_177590;
    }
    ctx->pc = 0x177588u;
    {
        const bool branch_taken_0x177588 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17758Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x177588) {
            ctx->pc = 0x1775C4u;
            goto label_1775c4;
        }
    }
    ctx->pc = 0x177590u;
label_177590:
    // 0x177590: 0x8e020000
    ctx->pc = 0x177590u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_177594:
    // 0x177594: 0x26100004
    ctx->pc = 0x177594u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_177598:
    // 0x177598: 0x1040000a
label_17759c:
    if (ctx->pc == 0x17759Cu) {
        ctx->pc = 0x17759Cu;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x1775A0u;
        goto label_1775a0;
    }
    ctx->pc = 0x177598u;
    {
        const bool branch_taken_0x177598 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17759Cu;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        if (branch_taken_0x177598) {
            ctx->pc = 0x1775C4u;
            goto label_1775c4;
        }
    }
    ctx->pc = 0x1775A0u;
label_1775a0:
    // 0x1775a0: 0x8c620000
    ctx->pc = 0x1775a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1775a4:
    // 0x1775a4: 0x202d
    ctx->pc = 0x1775a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1775a8:
    // 0x1775a8: 0x282d
    ctx->pc = 0x1775a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1775ac:
    // 0x1775ac: 0x302d
    ctx->pc = 0x1775acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1775b0:
    // 0x1775b0: 0x40f809
label_1775b4:
    if (ctx->pc == 0x1775B4u) {
        ctx->pc = 0x1775B4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1775B8u;
        goto label_1775b8;
    }
    ctx->pc = 0x1775B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1775B8u);
        ctx->pc = 0x1775B4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177560u: goto label_177560;
            case 0x177564u: goto label_177564;
            case 0x177568u: goto label_177568;
            case 0x17756Cu: goto label_17756c;
            case 0x177570u: goto label_177570;
            case 0x177574u: goto label_177574;
            case 0x177578u: goto label_177578;
            case 0x17757Cu: goto label_17757c;
            case 0x177580u: goto label_177580;
            case 0x177584u: goto label_177584;
            case 0x177588u: goto label_177588;
            case 0x17758Cu: goto label_17758c;
            case 0x177590u: goto label_177590;
            case 0x177594u: goto label_177594;
            case 0x177598u: goto label_177598;
            case 0x17759Cu: goto label_17759c;
            case 0x1775A0u: goto label_1775a0;
            case 0x1775A4u: goto label_1775a4;
            case 0x1775A8u: goto label_1775a8;
            case 0x1775ACu: goto label_1775ac;
            case 0x1775B0u: goto label_1775b0;
            case 0x1775B4u: goto label_1775b4;
            case 0x1775B8u: goto label_1775b8;
            case 0x1775BCu: goto label_1775bc;
            case 0x1775C0u: goto label_1775c0;
            case 0x1775C4u: goto label_1775c4;
            case 0x1775C8u: goto label_1775c8;
            case 0x1775CCu: goto label_1775cc;
            case 0x1775D0u: goto label_1775d0;
            case 0x1775D4u: goto label_1775d4;
            case 0x1775D8u: goto label_1775d8;
            case 0x1775DCu: goto label_1775dc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1775B8u; }
            if (ctx->pc != 0x1775B8u) { return; }
        }
    }
    ctx->pc = 0x1775B8u;
label_1775b8:
    // 0x1775b8: 0x40202d
    ctx->pc = 0x1775b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1775bc:
    // 0x1775bc: 0x1080fff2
label_1775c0:
    if (ctx->pc == 0x1775C0u) {
        ctx->pc = 0x1775C0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 15));
        ctx->pc = 0x1775C4u;
        goto label_1775c4;
    }
    ctx->pc = 0x1775BCu;
    {
        const bool branch_taken_0x1775bc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1775C0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 15));
        if (branch_taken_0x1775bc) {
            ctx->pc = 0x177588u;
            goto label_177588;
        }
    }
    ctx->pc = 0x1775C4u;
label_1775c4:
    // 0x1775c4: 0xdfb00000
    ctx->pc = 0x1775c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1775c8:
    // 0x1775c8: 0x80102d
    ctx->pc = 0x1775c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1775cc:
    // 0x1775cc: 0xdfb10008
    ctx->pc = 0x1775ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1775d0:
    // 0x1775d0: 0xdfb20010
    ctx->pc = 0x1775d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1775d4:
    // 0x1775d4: 0xdfbf0018
    ctx->pc = 0x1775d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1775d8:
    // 0x1775d8: 0x3e00008
label_1775dc:
    if (ctx->pc == 0x1775DCu) {
        ctx->pc = 0x1775DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1775E0u;
        goto label_fallthrough_0x1775d8;
    }
    ctx->pc = 0x1775D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1775DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177560u: goto label_177560;
            case 0x177564u: goto label_177564;
            case 0x177568u: goto label_177568;
            case 0x17756Cu: goto label_17756c;
            case 0x177570u: goto label_177570;
            case 0x177574u: goto label_177574;
            case 0x177578u: goto label_177578;
            case 0x17757Cu: goto label_17757c;
            case 0x177580u: goto label_177580;
            case 0x177584u: goto label_177584;
            case 0x177588u: goto label_177588;
            case 0x17758Cu: goto label_17758c;
            case 0x177590u: goto label_177590;
            case 0x177594u: goto label_177594;
            case 0x177598u: goto label_177598;
            case 0x17759Cu: goto label_17759c;
            case 0x1775A0u: goto label_1775a0;
            case 0x1775A4u: goto label_1775a4;
            case 0x1775A8u: goto label_1775a8;
            case 0x1775ACu: goto label_1775ac;
            case 0x1775B0u: goto label_1775b0;
            case 0x1775B4u: goto label_1775b4;
            case 0x1775B8u: goto label_1775b8;
            case 0x1775BCu: goto label_1775bc;
            case 0x1775C0u: goto label_1775c0;
            case 0x1775C4u: goto label_1775c4;
            case 0x1775C8u: goto label_1775c8;
            case 0x1775CCu: goto label_1775cc;
            case 0x1775D0u: goto label_1775d0;
            case 0x1775D4u: goto label_1775d4;
            case 0x1775D8u: goto label_1775d8;
            case 0x1775DCu: goto label_1775dc;
            default: break;
        }
        return;
    }
label_fallthrough_0x1775d8:
    ctx->pc = 0x1775E0u;
}
