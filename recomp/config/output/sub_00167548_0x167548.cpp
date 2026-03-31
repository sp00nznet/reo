#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00167548
// Address: 0x167548 - 0x1675e8
void sub_00167548_0x167548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x167548u;

label_167548:
    // 0x167548: 0x510c0
    ctx->pc = 0x167548u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
label_16754c:
    // 0x16754c: 0x27bdffd0
    ctx->pc = 0x16754cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_167550:
    // 0x167550: 0x451023
    ctx->pc = 0x167550u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_167554:
    // 0x167554: 0xffb00010
    ctx->pc = 0x167554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_167558:
    // 0x167558: 0x21080
    ctx->pc = 0x167558u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_16755c:
    // 0x16755c: 0xffb10018
    ctx->pc = 0x16755cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_167560:
    // 0x167560: 0x451021
    ctx->pc = 0x167560u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_167564:
    // 0x167564: 0xffb20020
    ctx->pc = 0x167564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_167568:
    // 0x167568: 0x21080
    ctx->pc = 0x167568u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_16756c:
    // 0x16756c: 0xffbf0028
    ctx->pc = 0x16756cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_167570:
    // 0x167570: 0x821821
    ctx->pc = 0x167570u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_167574:
    // 0x167574: 0x3a0202d
    ctx->pc = 0x167574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_167578:
    // 0x167578: 0xc05a7b2
label_16757c:
    if (ctx->pc == 0x16757Cu) {
        ctx->pc = 0x16757Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4432));
        ctx->pc = 0x167580u;
        goto label_167580;
    }
    ctx->pc = 0x167578u;
    SET_GPR_U32(ctx, 31, 0x167580u);
    ctx->pc = 0x16757Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4432));
    ctx->pc = 0x169EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EC8_0x169ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167580u; }
    }
    if (ctx->pc != 0x167580u) { return; }
    ctx->pc = 0x167580u;
label_167580:
    // 0x167580: 0x8e110020
    ctx->pc = 0x167580u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_167584:
    // 0x167584: 0x1620000a
label_167588:
    if (ctx->pc == 0x167588u) {
        ctx->pc = 0x167588u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x16758Cu;
        goto label_16758c;
    }
    ctx->pc = 0x167584u;
    {
        const bool branch_taken_0x167584 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x167588u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        if (branch_taken_0x167584) {
            ctx->pc = 0x1675B0u;
            goto label_1675b0;
        }
    }
    ctx->pc = 0x16758Cu;
label_16758c:
    // 0x16758c: 0x12400009
label_167590:
    if (ctx->pc == 0x167590u) {
        ctx->pc = 0x167590u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
        ctx->pc = 0x167594u;
        goto label_167594;
    }
    ctx->pc = 0x16758Cu;
    {
        const bool branch_taken_0x16758c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x167590u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
        if (branch_taken_0x16758c) {
            ctx->pc = 0x1675B4u;
            goto label_1675b4;
        }
    }
    ctx->pc = 0x167594u;
label_167594:
    // 0x167594: 0x8e020004
    ctx->pc = 0x167594u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_167598:
    // 0x167598: 0x8c430000
    ctx->pc = 0x167598u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16759c:
    // 0x16759c: 0x40202d
    ctx->pc = 0x16759cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1675a0:
    // 0x1675a0: 0x8c620024
    ctx->pc = 0x1675a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1675a4:
    // 0x1675a4: 0x40f809
label_1675a8:
    if (ctx->pc == 0x1675A8u) {
        ctx->pc = 0x1675A8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1675ACu;
        goto label_1675ac;
    }
    ctx->pc = 0x1675A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1675ACu);
        ctx->pc = 0x1675A8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167548u: goto label_167548;
            case 0x16754Cu: goto label_16754c;
            case 0x167550u: goto label_167550;
            case 0x167554u: goto label_167554;
            case 0x167558u: goto label_167558;
            case 0x16755Cu: goto label_16755c;
            case 0x167560u: goto label_167560;
            case 0x167564u: goto label_167564;
            case 0x167568u: goto label_167568;
            case 0x16756Cu: goto label_16756c;
            case 0x167570u: goto label_167570;
            case 0x167574u: goto label_167574;
            case 0x167578u: goto label_167578;
            case 0x16757Cu: goto label_16757c;
            case 0x167580u: goto label_167580;
            case 0x167584u: goto label_167584;
            case 0x167588u: goto label_167588;
            case 0x16758Cu: goto label_16758c;
            case 0x167590u: goto label_167590;
            case 0x167594u: goto label_167594;
            case 0x167598u: goto label_167598;
            case 0x16759Cu: goto label_16759c;
            case 0x1675A0u: goto label_1675a0;
            case 0x1675A4u: goto label_1675a4;
            case 0x1675A8u: goto label_1675a8;
            case 0x1675ACu: goto label_1675ac;
            case 0x1675B0u: goto label_1675b0;
            case 0x1675B4u: goto label_1675b4;
            case 0x1675B8u: goto label_1675b8;
            case 0x1675BCu: goto label_1675bc;
            case 0x1675C0u: goto label_1675c0;
            case 0x1675C4u: goto label_1675c4;
            case 0x1675C8u: goto label_1675c8;
            case 0x1675CCu: goto label_1675cc;
            case 0x1675D0u: goto label_1675d0;
            case 0x1675D4u: goto label_1675d4;
            case 0x1675D8u: goto label_1675d8;
            case 0x1675DCu: goto label_1675dc;
            case 0x1675E0u: goto label_1675e0;
            case 0x1675E4u: goto label_1675e4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1675ACu; }
            if (ctx->pc != 0x1675ACu) { return; }
        }
    }
    ctx->pc = 0x1675ACu;
label_1675ac:
    // 0x1675ac: 0x2428821
    ctx->pc = 0x1675acu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1675b0:
    // 0x1675b0: 0x3c027fff
    ctx->pc = 0x1675b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
label_1675b4:
    // 0x1675b4: 0x2a230000
    ctx->pc = 0x1675b4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 0));
label_1675b8:
    // 0x1675b8: 0x3442ffff
    ctx->pc = 0x1675b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_1675bc:
    // 0x1675bc: 0x3a0202d
    ctx->pc = 0x1675bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1675c0:
    // 0x1675c0: 0xc05a7b8
label_1675c4:
    if (ctx->pc == 0x1675C4u) {
        ctx->pc = 0x1675C4u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
        ctx->pc = 0x1675C8u;
        goto label_1675c8;
    }
    ctx->pc = 0x1675C0u;
    SET_GPR_U32(ctx, 31, 0x1675C8u);
    ctx->pc = 0x1675C4u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
    ctx->pc = 0x169EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EE0_0x169ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1675C8u; }
    }
    if (ctx->pc != 0x1675C8u) { return; }
    ctx->pc = 0x1675C8u;
label_1675c8:
    // 0x1675c8: 0xdfb00010
    ctx->pc = 0x1675c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1675cc:
    // 0x1675cc: 0x220102d
    ctx->pc = 0x1675ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1675d0:
    // 0x1675d0: 0xdfb20020
    ctx->pc = 0x1675d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1675d4:
    // 0x1675d4: 0xdfb10018
    ctx->pc = 0x1675d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1675d8:
    // 0x1675d8: 0xdfbf0028
    ctx->pc = 0x1675d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1675dc:
    // 0x1675dc: 0x3e00008
label_1675e0:
    if (ctx->pc == 0x1675E0u) {
        ctx->pc = 0x1675E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1675E4u;
        goto label_1675e4;
    }
    ctx->pc = 0x1675DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1675E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167548u: goto label_167548;
            case 0x16754Cu: goto label_16754c;
            case 0x167550u: goto label_167550;
            case 0x167554u: goto label_167554;
            case 0x167558u: goto label_167558;
            case 0x16755Cu: goto label_16755c;
            case 0x167560u: goto label_167560;
            case 0x167564u: goto label_167564;
            case 0x167568u: goto label_167568;
            case 0x16756Cu: goto label_16756c;
            case 0x167570u: goto label_167570;
            case 0x167574u: goto label_167574;
            case 0x167578u: goto label_167578;
            case 0x16757Cu: goto label_16757c;
            case 0x167580u: goto label_167580;
            case 0x167584u: goto label_167584;
            case 0x167588u: goto label_167588;
            case 0x16758Cu: goto label_16758c;
            case 0x167590u: goto label_167590;
            case 0x167594u: goto label_167594;
            case 0x167598u: goto label_167598;
            case 0x16759Cu: goto label_16759c;
            case 0x1675A0u: goto label_1675a0;
            case 0x1675A4u: goto label_1675a4;
            case 0x1675A8u: goto label_1675a8;
            case 0x1675ACu: goto label_1675ac;
            case 0x1675B0u: goto label_1675b0;
            case 0x1675B4u: goto label_1675b4;
            case 0x1675B8u: goto label_1675b8;
            case 0x1675BCu: goto label_1675bc;
            case 0x1675C0u: goto label_1675c0;
            case 0x1675C4u: goto label_1675c4;
            case 0x1675C8u: goto label_1675c8;
            case 0x1675CCu: goto label_1675cc;
            case 0x1675D0u: goto label_1675d0;
            case 0x1675D4u: goto label_1675d4;
            case 0x1675D8u: goto label_1675d8;
            case 0x1675DCu: goto label_1675dc;
            case 0x1675E0u: goto label_1675e0;
            case 0x1675E4u: goto label_1675e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1675E4u;
label_1675e4:
    // 0x1675e4: 0x0
    ctx->pc = 0x1675e4u;
    // NOP
}
